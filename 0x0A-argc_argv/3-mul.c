#include <stdlib.h>
#include "main.h"
/**
 *main - entery point
 *@argc: count of the arguments
 *@argv: an array of pointers to the strings
 *Return: always 0
 */

int main(int argc, char *argv[])
{

int number1 = atoi(argv[1]);
int number2 = atoi(argv[2]);
int mul;
if (argc != 3)

{
printf("Error\n");
return (1);
}
else
{
mul = number1 * number2;
printf("%d\n", mul);
}
return (0);
}
