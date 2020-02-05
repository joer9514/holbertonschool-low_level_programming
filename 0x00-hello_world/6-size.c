#include <stdio.h>
/**
*main - Output size variable
*Description: Output variable size
*Return: void
*/
int main(void)
{
char ch;
int in;
long int lon;
long long int lli;
float fl;
printf("Size of a char: %ld byte(s)\n", sizeof(ch));
printf("Size of an int: %ld byte(s)\n", sizeof(in));
printf("Size of a long int: %ld byte(s)\n", sizeof(lon));
printf("Size of a long long int: %ld byte(s)\n", sizeof(lli));
printf("Size of a float: %ld byte(s)\n", sizeof(fl));
return (0);
}
