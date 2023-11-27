#include "main.h"
#include <stdlib.h>

/**
* read_textfile - prints file content to STDOUT
* Coded by Omar Assoudi
* @filename: file containing text
* @letters: number of letters that are read from filename
* Return: Number of bytes written if successful
*        0 if failure
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t fd;
ssize_t bytewrite;
ssize_t bytecount;

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
bytecount = read(fd, buffer, letters);
bytewrite = write(STDOUT_FILENO, buffer, bytecount);

free(buffer);
close(fd);
return (bytewrite);
}

