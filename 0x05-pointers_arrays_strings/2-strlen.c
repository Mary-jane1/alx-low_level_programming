#include <stdio.h>
/**
 *_strlen-Finds the length of a string.
 *@s:String pointer to the string whose length is to be found.
 *Return: returns the length of the string.
 */

size_t _strlen(const char *str)
{
	size_t length = 0;
	
	while (*str++)
	length++;
	return (length);
}
