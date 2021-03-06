#ifndef IMPORTS
#define IMPORTS 1

#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>

#endif

#ifndef PARSER_H
#define PARSER_H 1

char* inputLine();
char** inputCommand(char* input);
char* removeWhiteSpace(char* s);
int findIndex(char* string, char* substring);

#endif

