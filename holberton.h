#ifndef GRANDPARENT_H
#define GRANDPARENT_H
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct strIn
{
	char *va;
	char flag;
} str;
typedef struct numIn
{
	int va;
	char flag;

} num;
int _printf(const char *format, ...);
int putstring(char *in);
int _putchar(char c);
char *_csget(str in);
char *_diget(num in);
int getNumArgs(const char *copy);
char *_strcat(char *s1, char *s2);
int intlen(int x);
int typeChecker(const char *type);
int _strlen(char *s);
int isPrimary(const char *type);
char *numtostr(int x);

#endif
