#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#define BUF_SIZE 1024

/**
 * main - entry point for the program
 * @argc: the number of command-line arguments
 * @argv: an array of command-line argument strings
 *
 * Return: 0 on success, exit with error codes on failure
 */

int main(int argc, char *argv[])
{
int fdata1, fdata2;
ssize_t r, w;
char buf[BUF_SIZE];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
fdata1 = open(argv[1], O_RDONLY);
if (fdata1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
fdata2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fdata2 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
while ((r = read(fdata1, buf, BUF_SIZE)) > 0)
{
w = write(fdata2, buf, r);
if (w == -1 || w != r)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
if (r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (close(fdata1))
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdata1);
exit(100);
}
if (close(fdata2))
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdata2);
exit(100);
}
return (0);
}
