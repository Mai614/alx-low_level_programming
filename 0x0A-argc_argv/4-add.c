#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 *main - entery point
 *@argc: count of the arguments
 *@argv: an array of pointers to the strings
 *Return: always 0
 */

int main(int argc, char *argv[])
{
int i, j;
int sum = 0;
for (i = 1; i < argc; i++)
{
char *cs = argv[i];
for (j = 0; cs[j] != '\0'; j++)
{
if (!isdigit(cs[j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(cs);
}
printf("%d\n", sum);

return (0);

}
