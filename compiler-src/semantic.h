#ifndef SEMANTIC_H
#define SEMANTIC_H

#define MAX_ARGS 5
#define SYMBOL_TABLE_LENGTH 300

extern int line;

typedef enum  {
    _VARIABLE,
    _METHOD,
    _CONSTRUCTOR,
    _CLASS,
    _INTERFACE,
    _ENUM
} SymbolTypes;

typedef enum  {
    _DECLARATION,
    _FUNCTION_ARGUMENT,
    _INSTANTIATION,
    _CALL,
    _ASSIGNMENT,
    _IMPORT    
} SymbolState;

typedef enum  {
    _GLOBAL,
    _LOCAL    
} Level;

typedef struct node {
    char* name;                                            
    SymbolState state;                                            
    SymbolTypes symbolType;                                       
    char* type;                                             
    Level level;                                             
    int numberOfArgs;                                      
    char* argsNames[MAX_ARGS];                         
    char* argsTypes[MAX_ARGS];                         
    int blockId;
    char* className;
    int line;
} Node;

Node symbolTable[SYMBOL_TABLE_LENGTH];

int getNextIndex();

int getLastIndex();

Node *insertSymbol(char *name, SymbolState state, SymbolTypes symbolType, char *type, Level level, int blockId, char* className);

void insertCallArg(Node *method, char *name, char *type);

void addMethodArg(Node *function, char *name, char *type);

int CheckVariableExistanceQuitIfNotExists(char *name, Level level, int blockId);

int checkVariableDeclaration(char *name, Level level, int blockId);

int checkClassDeclaration(char* name);

int checkInterfaceDeclaration(char* name);

int checkEnumDeclaration(char* name);

int checkMethodDeclaration(char* name, int classId);

int checkVariableExistance(char *name, Level level, int blockId, int quit);

void checkMethodExistance(char *name, int blockId);

void checkClassExistance(char *name);

void checkInterfaceExistance(char *name);

void checkEnumExistance(char *name);

int checkConstructorName(char* name, char* className);

int checkMethodExistanceInClass(char* name, char* className);

int checkFieldExistanceInClass(char* name, char* className);

void checkMissingArgs(Node *call, char *className);

void checkVariableInitType(Node* variable, char* type);

void printTab();


#endif