#include "main.h"

/**
* str_concat -  a function that concatenates two strings.
*
* @s1:First string
* @s2:Second string
*
* Return: NULL in case of failure , but pointer to new string in
* case of success
*/

char *str_concat(char *s1, char *s2)
{
	char *concat_str;

	int inum, concat_inum = 0,  len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (inum = 0; s1[inum] || s2[inum]; inum++)
		len++;

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (inum = 0; s1[inum]; inum++)
		concat_str[concat_inum++] = s1[inum];

	for (inum = 0; s2[inum]; inum++)
		concat_str[concat_inum++] = s2[inum];

	return (concat_str);
}
