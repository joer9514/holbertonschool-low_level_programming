#include "holberton.h"
/**
*_isalpha - Message 011
*@c: Message 011
*Return: 1
*/
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
