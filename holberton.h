#ifndef GRANDPARENT_H
#define GRANDPARENT_H
int _printf(const char *format, ...);
char *_csget(struct _str in);
char *_diget(struct _num in);
int getNumArgs(char *copy);
int typeChecker(char *type);
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct strIn
{
	char *va;
	int (*f)(int a, int b);

} str;
typedef struct numIn
{
	char *va;
	char *mod;

} num;
#endif
