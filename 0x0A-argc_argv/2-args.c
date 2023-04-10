#include "main.h"
/**
 *main - entery point
 *@argc: count of the arguments
 *@argv: an array of pointers to the strings
 *Return: always 0
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);

return (0);

}
