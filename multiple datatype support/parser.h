#include "excel.h"
#ifndef _parser_h
#define _parser_h
#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

// Return status code, take input, save 3 args
int parseInput(char *, size_t, char *, char *, char *, int *);
unsigned int *parseRowColumn(char *);
int evaluateExpression(Excel, Cell);
char *cloneStr(char *);
char **tokenize(char *, int *);
int isCell(char *);
int isLiteral(char *);
int isOperator(char *);
void getRowColumnFromString(char *, unsigned int *);

// status codes
#define SUCCESS_PARSE 1
#define FAIL_PARSE 0
// op codes
#define GET 0
#define SET 1
#define PRINT 2
#define IMPORT 3
#define EXPORT 4
#define SAVE 5
#define EXIT 6
#define GET_COMMAND "GET"
#define SET_COMMAND "SET"
#define PRINT_COMMAND "PRINT"
#define IMPORT_COMMAND "IMPORT"
#define EXPORT_COMMAND "EXPORT"
#define SAVE_COMMAND "SAVE"
#define EXIT_COMMAND "EXIT"

#endif