#include "main.h"

/**
 * create_file - A function that Creates a file with the given text content.
 * @filename: The name of the file to create.
 * @text_content: The text content to be written to the file.
 * Return: 1 if it succeeds, -1 if it doesn't.
 */
int create_file(const char *filename, char *text_content)
{
int file_descriptor;
int num_letters;
int bytes_written;
if (!filename)
return (-1);
file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (file_descriptor == -1)
return (-1);
if (!text_content)
text_content = "";
num_letters = 0;
while (text_content[num_letters])
num_letters++;
bytes_written = write(file_descriptor, text_content, num_letters);
if (bytes_written == -1)
return (-1);
close(file_descriptor);
return (1);
}
