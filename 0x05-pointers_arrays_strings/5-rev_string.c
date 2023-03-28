#include "main.h"
/**
 * rev_string - prints reverses a string
 * @s: pointer
 *
 * Return: nothing
 */
void rev_string(char *s)
{
int len = 0;
int i;
int mid = len / 2;
char temp;

while (s[len] != '\0')
len++;
for (i = 0; i < mid; i++)
{
temp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = temp;
}
}
