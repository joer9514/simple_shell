#ifndef _HOLBERTON_H
#define _HOLBERTON_H

/*LIBRARIES*/
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <signal.h>
#include <sys/stat.h>

/*FUNCTIONS*/
extern char **environ;
char *_strdup(char *str);
void _prompt(void);
char **token(char *string, const char *delim);
int execute(char **av, char *, int);
int check_buffer(char *buffer);
void free_aux(char **aux);
int strtok1(char *string, char *delim);
int strtok2(char *string, char *delim);
char *_strtok(char *string, char *delim);
int words_counter(char *s);

#endif
