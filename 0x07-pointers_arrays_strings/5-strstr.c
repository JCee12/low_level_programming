#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be checked
 * @needle: substring
 * Return: pointer or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *b;
	char *p;

	while (*haystack != '\0')
	{
		b = haystack;
		p = needle;

		while (*b != '\0' && *p != '\0' && *b == *p)
		{
			b++;
			p++;
		}
		if (!*p)
			return (b);
		haystack = b + 1;
	}
	return (0);
}
