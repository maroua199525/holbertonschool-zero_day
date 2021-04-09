#include "shell.h"

/**
 * _strlen - length of string
 *@s:a character
 * Return: length
 */
int _strlen(char *s)
{
  int length, i;

  i = 0;
  while (s[i] != '\0')
    {
      length = length + 1;
      i++;
    }
  return (length);
}

/**
 * *_strcpy - copies the string
 *@src:string
 *@dest:string
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
  int i, j;

  i = 0;
  while (src[i] != '\0')
    {
      i++;
    }
  j = i;
  for (i = 0; i <= j; i++)
    {
      dest[i] = src[i];
    }
  return (dest);
}
/**
 * *_strcmp - compare the string
 *@s1:string
 *@s2:string
 * Return: p
 */
int _strcmp(char *s1, char *s2)
{
  int i, p;

  i = 0;
  while (s1[i] != '\0' && s2[i] != '\0')
    {
      if (s1[i] == s2[i])
	p = 0;
      else
	{
	  p =  (s1[i] - s2[i]);
	  s1[i + 1] = '\0';
	}
      i++;
    }
  return (p);
}

char *_strdup(char *str)
{
  int i = 0, len;
  char *dest;

  if (str == NULL)
    return (NULL);
  len = _strlen(str);
  dest = malloc(len + 1);
  if (dest == NULL)
    return (NULL);
  while (i < len)
    {
    dest[i] = str[i];
    i++;
    }
  dest[i] = '\0';
  return (dest);
}
/**
 * _strcat - rev the string
 *@src:a string
 *@dest:a string
 * Return:dest
 */
char *_strcat(char *dest, char *src)
{
  int i, j;

  i = 0;
  while (dest[i] != '\0')
    {
      i++;
    }
  j = 0;
  while (src[j] != '\0')
    {
      dest[i] = src[j];
      i++;
      j++;
    }
  dest[i] = '\0';
  return (dest);
}
