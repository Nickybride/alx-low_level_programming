#include "main.h"
/**
 * _strpbrk - entry point
 * @s: the string to be searched.
 * @accept: the string containing the acceptable bytes
 * Return: always 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}
	return ('\0');
}
