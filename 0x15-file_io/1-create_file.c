#include "main.h"

/**
* create_file - creates a new file and puts content into it
* @filename: name of the file
* @text_content: text content to be put in the file
* coded by Omar Assoudi
*
* Return: 1 if successful
*         -1 if failure
*/
int create_file(const char *filename, char *text_content)
{
/*fd stands for file descriptor*/
int fd, bytewrite;
int length = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (length = 0; text_content[length];)
length++;
}

fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
bytewrite = write(fd, text_content, length);

if (fd == -1 || bytewrite == -1)
return (-1);

close(fd);

return (1);
}
