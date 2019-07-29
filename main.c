#include "holberton.h"
int main()
{
int len;
    int len2;
    char *teststring;
    char c;

    c = '\n';

    teststring = "test";
    len = _printf("%%.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    printf("*%d*\n", 033);
    printf("*%i*\n", 033);
    _printf("Length:[%d, %i]\n", len, len, len);
    _printf("Length:[%s]\n", teststring);
    printf("Length:[%d, %i]\n", len2, len2, len2);
    _printf("Negative:[%c]\n", c);
    printf("Negative:[%d]\n", -762534);

    return (0);
}
