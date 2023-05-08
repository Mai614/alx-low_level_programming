#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: the name of the file to append to
 * @text_content: the content to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{

int fdata;

if (filename == NULL)
return (-1);

fdata = open(filename, O_WRONLY | O_APPEND);
if (fdata == -1)
return (-1);

if (text_content != NULL)
{

int len = strlen(text_content);
ssize_t w = write(fdata, text_content, len);

if (w != len)
{
close(fdata);

return (-1);
}

}

close(fdata);
return (1);
}
