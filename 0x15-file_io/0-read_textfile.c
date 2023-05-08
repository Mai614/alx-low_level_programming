#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 *read_textfile - reads a text file and prints it to the POSIX standard output
 *@filename: name of the file to read
 *@letters: number of letters to read and print
 *
 *Return: the actual number of letters it could
 *read and print, or 0 on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

int fdata, bytes_read, bytes_written;
char *z;

if (filename == NULL)
return (0);

fdata = open(filename, O_RDONLY);
if (fdata == -1)
return (0);

z = malloc(sizeof(char) * letters);
if (z == NULL)
return (0);


bytes_read = read(fdata, z, letters);
if (bytes_read == -1)
{
free(z);
close(fdata);
return (0);
}

bytes_written = write(STDOUT_FILENO, z, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
free(z);
close(fdata);
return (0);
}

free(z);
close(fdata);

return (bytes_written);
}
