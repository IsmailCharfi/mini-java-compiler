
#include <ctype.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "semantic.h"

int _index = 0;

void semanticError(char *format, ...)
{
    va_list args;
    va_start(args, format);
    int size = vsnprintf(NULL, 0, format, args);
    char *buffer = malloc(size + 1);
    vsnprintf(buffer, size + 1, format, args);
    va_end(args);
    fprintf(stderr, "Line: %d : Semantic error, %s", line, buffer);
    exit(1);
}

int getNextIndex()
{
    if (_index < SYMBOL_TABLE_LENGTH)
    {
        return _index++;
    }
    else
    {
        semanticError("You have exceeded the maximum number of symbol declarations, Max is : %d", SYMBOL_TABLE_LENGTH);
    }
}

int getLastIndex()
{
    return _index - 1;
}

Node *insertSymbol(char *name, SymbolState state, SymbolTypes symbolType, char *type, Level level, int blockId, char *className)
{
    int index = getNextIndex();
    symbolTable[index].name = name;
    symbolTable[index].state = state;
    symbolTable[index].symbolType = symbolType;
    symbolTable[index].type = type;
    symbolTable[index].level = level;
    symbolTable[index].blockId = blockId;
    symbolTable[index].className = className;
    symbolTable[index].numberOfArgs = 0;
    symbolTable[index].line = line;

    return &symbolTable[index];
}

void addMethodArg(Node *function, char *name, char *type)
{
    if (function->numberOfArgs < MAX_ARGS)
    {
        for (int i = 0; i < function->numberOfArgs; i++)
        {
            if (strcmp(function->argsNames[i], name) == 0)
            {
                semanticError("method argument ' %s ' already exists in function ' %s '", line, name, function->name);
            }
        }

        (function->numberOfArgs)++;
        function->argsNames[function->numberOfArgs - 1] = name;
        function->argsTypes[function->numberOfArgs - 1] = type;
    }
    else
    {
        semanticError("You have exceeded the maximum number of method arguments, Max is : %d", MAX_ARGS);
    }
}

void insertCallArg(Node *method, char *name, char *type)
{
    Node *methodDeclaration = NULL;
    if (!type)
    {
        for (int i = getLastIndex(); i >= 0; i--)
        {
            if ((symbolTable[i].symbolType == _METHOD || symbolTable[i].symbolType == _CONSTRUCTOR) && symbolTable[i].state == _DECLARATION)
            {
                methodDeclaration = &symbolTable[i];
                break;
            }

            if (strcmp(symbolTable[i].name, name) == 0 && symbolTable[i].state == _DECLARATION)
            {
                type = symbolTable[i].type;
                break;
            }
        }
        if (!type && methodDeclaration)
        {
            for (int j = 0; j < methodDeclaration->numberOfArgs; j++)
            {
                if (strcmp(methodDeclaration->argsNames[j], name) == 0)
                {
                    type = methodDeclaration->argsTypes[j];
                    break;
                }
            }
        }
    }

    if (!type)
    {
        semanticError("Unknown type");
    }

    if (!methodDeclaration)
    {
        for (int i = getLastIndex(); i >= 0; i--)
        {
            if ((symbolTable[i].symbolType == _METHOD || symbolTable[i].symbolType == _CONSTRUCTOR) && symbolTable[i].state == _DECLARATION && strcmp(symbolTable[i].name, method->name) == 0)
            {
                methodDeclaration = &symbolTable[i];
                break;
            }
        }
    }

    if (!methodDeclaration && method->symbolType == _CONSTRUCTOR)
    {
        method->numberOfArgs++;
        method->argsNames[method->numberOfArgs - 1] = name;
        method->argsTypes[method->numberOfArgs - 1] = type;
        return;
    }

    if (!methodDeclaration)
    {
        semanticError("method doesnt exist");
    }

    if (methodDeclaration->numberOfArgs <= method->numberOfArgs)
    {
        semanticError("Method args number is not compatible with its definition");
    }

    if (strcmp(type, "NUMBER") == 0)
    {
        if (strcmp(methodDeclaration->argsTypes[method->numberOfArgs], "int") != 0 || strcmp(methodDeclaration->argsTypes[method->numberOfArgs], "double") != 0 || strcmp(methodDeclaration->argsTypes[method->numberOfArgs], "float") != 0)
        {
            semanticError("incompatible types: number cannot be converted to '%s' in method '%s'", methodDeclaration->argsTypes[method->numberOfArgs], method->name);
        }
    }

    if (strcmp(type, "TRUE") == 0 || strcmp(type, "FALSE") == 0)
    {
        if (methodDeclaration->argsTypes[method->numberOfArgs] != "boolean")
        {
            semanticError("incompatible types: boolean cannot be converted to  '%s' in method '%s'", methodDeclaration->argsTypes[method->numberOfArgs], method->name);
        }
    }

    if (strcmp(type, "NULL_") == 0)
    {
        if (methodDeclaration->argsTypes[method->numberOfArgs] != "null")
        {
            semanticError("arg in not nullable in method '%s'", method->name);
        }
    }

    if (strcmp(type, methodDeclaration->argsTypes[method->numberOfArgs]) != 0)
    {
        semanticError("incompatible types: '%s' cannot be converted to '%s' in method '%s' ", type, methodDeclaration->argsTypes[method->numberOfArgs], method->name);
    }

    if (method->numberOfArgs < MAX_ARGS)
    {
        method->numberOfArgs++;
        method->argsNames[method->numberOfArgs - 1] = name;
        method->argsTypes[method->numberOfArgs - 1] = type;
    }
    else
    {
        semanticError("You have exceeded the maximum number of method arguments, Max is : %d", MAX_ARGS);
    }
}

int checkVariableDeclaration(char *name, Level level, int blockId)
{
    if (level == _GLOBAL)
    {
        for (int i = getLastIndex(); i > 0; i--)
        {
            if (
                symbolTable[i].symbolType == _VARIABLE && symbolTable[i].blockId == blockId && strcmp(symbolTable[i].name, name) == 0 && symbolTable[i].level == _GLOBAL)
            {
                semanticError("variable ' %s ' is already declared in class scope", name);
            }
        }
    }
    else if (level == _LOCAL)
    {
        int i = getLastIndex();
        while (symbolTable[i].symbolType != _METHOD && symbolTable[i].state != _CALL)
        {
            if (strcmp(symbolTable[i].name, name) == 0 && symbolTable[i].state == _DECLARATION)
            {
                semanticError("variable ' %s ' is already declared in method scope", name);
            }
            i--;
        }
        Node function = symbolTable[i];
        for (int j = 0; j < function.numberOfArgs; j++)
        {
            if (strcmp(function.argsNames[j], name) == 0)
            {
                semanticError("variable ' %s ' is already declared in method ' %s ' args", name, function.name);
            }
        }
    }

    return 1;
}

int checkClassDeclaration(char *name)
{
    for (int i = getLastIndex(); i >= 0; i--)
    {
        if (
            (symbolTable[i].symbolType == _CLASS && symbolTable[i].state == _DECLARATION && strcmp(symbolTable[i].name, name) == 0) || (symbolTable[i].state == _IMPORT && strcmp(symbolTable[i].name, name) == 0))
        {
            semanticError("class ' %s ' is already declared or imported", name);
        }

        if (
            (symbolTable[i].symbolType == _INTERFACE && symbolTable[i].state == _DECLARATION && strcmp(symbolTable[i].name, name) == 0))
        {
            semanticError("there is an interface declared with the same name ' %s '", name);
        }

        if (
            (symbolTable[i].symbolType == _ENUM && symbolTable[i].state == _DECLARATION && strcmp(symbolTable[i].name, name) == 0) || (symbolTable[i].state == _IMPORT && strcmp(symbolTable[i].name, name) == 0))
        {
            semanticError("there is an enum declared with the same name ' %s '", name);
        }
    }

    return 1;
}

int checkInterfaceDeclaration(char *name)
{
    for (int i = getLastIndex(); i >= 0; i--)
    {
        if ((symbolTable[i].symbolType == _INTERFACE && symbolTable[i].state == _DECLARATION && strcmp(symbolTable[i].name, name) == 0) || (symbolTable[i].state == _IMPORT && strcmp(symbolTable[i].name, name) == 0))
        {
            semanticError("interface ' %s ' is already declared or imported", name);
        }
        if (
            (symbolTable[i].symbolType == _CLASS && symbolTable[i].state == _DECLARATION && strcmp(symbolTable[i].name, name) == 0))
        {
            semanticError("there is a class declared with the same name ' %s '", name);
        }
        if (
            (symbolTable[i].symbolType == _ENUM && symbolTable[i].state == _DECLARATION && strcmp(symbolTable[i].name, name) == 0) || (symbolTable[i].state == _IMPORT && strcmp(symbolTable[i].name, name) == 0))
        {
            semanticError("there is an enum declared with the same name ' %s '", name);
        }
    }

    return 1;
}

int checkEnumDeclaration(char *name)
{
    for (int i = getLastIndex(); i >= 0; i--)
    {
        if ((symbolTable[i].symbolType == _ENUM && symbolTable[i].state == _DECLARATION && strcmp(symbolTable[i].name, name) == 0) || (symbolTable[i].state == _IMPORT && strcmp(symbolTable[i].name, name) == 0))
        {
            semanticError("enum ' %s ' is already declared or imported", name);
        }
        if (
            (symbolTable[i].symbolType == _INTERFACE && symbolTable[i].state == _DECLARATION && strcmp(symbolTable[i].name, name) == 0))
        {
            semanticError("there is an interface declared with the same name ' %s '", name);
        }
        if (
            (symbolTable[i].symbolType == _CLASS && symbolTable[i].state == _DECLARATION && strcmp(symbolTable[i].name, name) == 0) || (symbolTable[i].state == _IMPORT && strcmp(symbolTable[i].name, name) == 0))
        {
            semanticError("there is a class declared with the same name ' %s '", name);
        }
    }

    return 1;
}

int checkMethodDeclaration(char *name, int blockId)
{
    Node methods[100];
    int counter = 0;

    for (int i = getLastIndex(); i >= 0; i--)
    {
        if ((symbolTable[i].symbolType == _METHOD || symbolTable[i].symbolType == _CONSTRUCTOR) && symbolTable[i].state == _DECLARATION && symbolTable[i].blockId == blockId && strcmp(symbolTable[i].name, name) == 0)
        {
            methods[counter] = symbolTable[i];
            counter++;
        }
    }

    if (counter > 0)
    {
        Node methodToCheck = methods[0];

        for (int i = 1; i < counter; i++)
        {
            int test = 1;
            if (methodToCheck.numberOfArgs == methods[i].numberOfArgs)
            {
                for (int k = 0; k < methodToCheck.numberOfArgs; k++)
                {
                    if (strcmp(methodToCheck.argsTypes[k], methods[i].argsTypes[k]) != 0)
                    {
                        test = 0;
                        break;
                    }
                }
            }
            else
            {
                break;
            }
            if (strcmp(methodToCheck.type, methods[i].type) == 0 && test == 1)
            {
                semanticError("method ' %s ' is already declared in class scope", methodToCheck.name);
            }
        }
    }

    return 1;
}

int CheckVariableExistanceQuitIfNotExists(char *name, Level level, int blockId)
{
    checkVariableExistance(name, level, blockId, 1);
}

int checkVariableExistance(char *name, Level level, int blockId, int quit)
{
    int test = 0;
    if (level == _LOCAL)
    {
        Node *function = NULL;
        for (int i = getLastIndex(); i >= 0; i--)
        {
            if ((symbolTable[i].symbolType == _METHOD || symbolTable[i].symbolType == _CONSTRUCTOR) && symbolTable[i].state == _DECLARATION)
            {
                function = &symbolTable[i];
                break;
            }

            if (strcmp(symbolTable[i].name, name) == 0 && symbolTable[i].state == _DECLARATION)
            {
                test = 1;
                break;
            }
        }
        for (int j = 0; j < function->numberOfArgs; j++)
        {
            if (strcmp(function->argsNames[j], name) == 0)
            {
                test = 1;
                break;
            }
        }
    }

    if (test == 0)
    {
        for (int i = getLastIndex(); i > 0; i--)
        {
            if (symbolTable[i].symbolType == _VARIABLE && symbolTable[i].blockId == blockId && strcmp(symbolTable[i].name, name) == 0 && symbolTable[i].level == _GLOBAL)
            {
                test = 1;
                break;
            }
        }
    }

    if (test == 0)
    {
        if (level == _GLOBAL)
        {
            if (quit)
            {
                semanticError("class property ' %s ' is not declared", name);
            }
            else
            {
                return 0;
            }
        }
        else
        {
            if (quit)
            {

                semanticError("variable ' %s ' is not declared", name);
            }
            else
            {
                return 0;
            }
        }
    }

    return 1;
}

void checkMethodExistance(char *name, int blockId)
{
    return;
}

void checkClassExistance(char *name)
{
    int test = 0;
    int j = 0;
    char *className = (char *)malloc(strlen(name));
    int x = 0;
    int y = 0;

    while (name[x] != '\0')
    {
        if (name[x] != '[')
        {
            className[y] = name[x];
            y++;
        }
        else
        {
            while (name[x] == '[')
            {
                x++;
            }
        }
        x++;
    }
    className[y] = '\0';

    for (j; j <= getLastIndex(); j++)
    {
        if ((symbolTable[j].symbolType == _CLASS && symbolTable[j].state == _DECLARATION && strcmp(symbolTable[j].name, className) == 0) || (symbolTable[j].state == _IMPORT && strcmp(symbolTable[j].name, className) == 0))
        {
            test = 1;
            break;
        }
    }

    if (test == 0)
    {
        semanticError("class ' %s ' is not declared nor imported", className);
    }
}

void checkInterfaceExistance(char *name)
{
    int test = 0;
    int j = 0;

    for (j; j <= getLastIndex(); j++)
    {
        if ((symbolTable[j].symbolType == _INTERFACE && symbolTable[j].state == _DECLARATION && strcmp(symbolTable[j].name, name) == 0) || (symbolTable[j].state == _IMPORT && strcmp(symbolTable[j].name, name) == 0))
        {
            test = 1;
            break;
        }
    }

    if (test == 0)
    {
        semanticError("interface ' %s ' is not declared nor imported", name);
    }
}

void checkEnumExistance(char *name)
{
    int test = 0;
    int j = 0;

    for (j; j <= getLastIndex(); j++)
    {
        if ((symbolTable[j].symbolType == _ENUM && symbolTable[j].state == _DECLARATION && strcmp(symbolTable[j].name, name) == 0) || (symbolTable[j].state == _IMPORT && strcmp(symbolTable[j].name, name) == 0))
        {
            test = 1;
            break;
        }
    }

    if (test == 0)
    {
        semanticError("enum ' %s ' is not declared nor imported", name);
    }
}

int checkConstructorName(char *name, char *className)
{
    if (strcmp(name, className) != 0)
    {
        semanticError("constructor name must be the same as the class name ' %s '", name);
    }

    return 1;
}

int checkMethodExistanceInClass(char *name, char *className)
{
    int test = 0;
    for (int i = 0; i < _index; i++)
    {
        if (symbolTable[i].symbolType == _METHOD && strcmp(className, symbolTable[i].className ? symbolTable[i].className : '\0') == 0 && strcmp(symbolTable[i].name, name) == 0 && symbolTable[i].state == _DECLARATION)
        {
            test = 1;
            break;
        }
    }

    if (test == 0)
    {
        semanticError("the method ' %s ' doesn't exist in the class ' %s '", name, className);
    }
}

int checkFieldExistanceInClass(char *name, char *className)
{
    int test = 0;
    for (int i = 0; i < getLastIndex(); i++)
    {
        if (symbolTable[i].symbolType == _VARIABLE && strcmp(className, symbolTable[i].className ? symbolTable[i].className : '\0') == 0 && strcmp(symbolTable[i].name, name) == 0 && symbolTable[i].state == _DECLARATION)
        {
            test = 1;
            break;
        }
    }

    if (test == 0)
    {
        semanticError("the field ' %s ' doesn't exist in the class ' %s '", name, className);
    }
}

void checkMissingArgs(Node *call, char *className)
{
    Node *method = NULL;

    for (int i = 0; i < getLastIndex(); i++)
    {
        if ((symbolTable[i].symbolType == _METHOD || symbolTable[i].symbolType == _CONSTRUCTOR) && strcmp(className, symbolTable[i].className ? symbolTable[i].className : '\0') == 0 && strcmp(symbolTable[i].name, call->name) == 0 && symbolTable[i].state == _DECLARATION)
        {
            method = &symbolTable[i];
            break;
        }
    }

    if (!method && call->symbolType == _CONSTRUCTOR)
    {
        if (call->numberOfArgs)
        {
            semanticError("You can only use the default constructor for the class %s or you need to add the custom constructor", className);
        }
        else
        {
            return;
        }
    }

    if (call->numberOfArgs != method->numberOfArgs)
    {
        semanticError("the method ' %s ' has missing args", method->name);
    }
}

void checkVariableInitType(Node *variable, char *type)
{
    if (strcmp(type, "NUMBER") == 0)
    {
        if (strcmp(variable->type, "int") != 0 || strcmp(variable->type, "double") != 0 || strcmp(variable->type, "float") != 0)
        {
            semanticError("incompatible types: number cannot be converted to '%s'", variable->type);
        }
    }

    if (strcmp(type, "TRUE") == 0 || strcmp(type, "FALSE") == 0)
    {
        if (variable->type != "boolean")
        {
            semanticError("incompatible types: boolean cannot be converted to  '%s'", variable->type);
        }
    }

    if (strcmp(type, "NULL_") == 0)
    {
        return;
    }

    if (strcmp(type, variable->type) != 0)
    {
        semanticError("incompatible types: '%s' cannot be converted to '%s' ", type, variable->type);
    }
}

void printTab()
{
    printf("\n\nSYMBOL TABLE\n");
    printf("\n    name           state            symbolType          type            level       block         arg1                arg2             arg3                arg4                  arg5      ");
    printf("\n---------------- ---------------- ---------------- ---------------- ---------------- ----- ------------------ ------------------ ------------------  ------------------  ------------------");
    for (int i = 0; i < _index; i++)
    {
        printf("\n%-16s %-16s %-16s %-16s %-16s %-5d ",
               symbolTable[i].name,
               symbolTable[i].state == _DECLARATION ? "DECLARATION" : symbolTable[i].state == _FUNCTION_ARGUMENT ? "ARGUMENT"
                                                                  : symbolTable[i].state == _INSTANTIATION       ? "INSTANTIATION"
                                                                  : symbolTable[i].state == _CALL                ? "CALL"
                                                                  : symbolTable[i].state == _ASSIGNMENT          ? "ASSIGNMENT"
                                                                  : symbolTable[i].state == _IMPORT              ? "IMPORT"
                                                                                                                 : "undifined",
               symbolTable[i].symbolType == _VARIABLE ? "VARIABLE" : symbolTable[i].symbolType == _METHOD    ? "METHOD"
                                                                 : symbolTable[i].symbolType == _CONSTRUCTOR ? "CONSTRUCTOR"
                                                                 : symbolTable[i].symbolType == _CLASS       ? "CLASS"
                                                                 : symbolTable[i].symbolType == _INTERFACE   ? "INTERFACE"
                                                                 : symbolTable[i].symbolType == _ENUM        ? "ENUM"
                                                                                                             : "undifined",
               symbolTable[i].type ? symbolTable[i].type : "NULL",
               symbolTable[i].level ? "LOCAL" : "GLOBAL",
               symbolTable[i].blockId);
        if (symbolTable[i].numberOfArgs != 0)
        {
            for (int j = 0; j < symbolTable[i].numberOfArgs; j++)
            {
                if (symbolTable[i].argsNames[j])
                {
                    printf("%-8s:%-8s\t", symbolTable[i].argsNames[j], symbolTable[i].argsTypes[j]);
                }
                else
                {
                    printf("-");
                }
            }
        }
        else
            printf("-");
        printf("\n---------------- ---------------- ---------------- ---------------- ---------------- ----- ------------------ ------------------ ------------------  ------------------  ------------------");
    }
    printf("\n\n");
}