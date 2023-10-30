#include "main.h"

/**
 * append_text_to_file - Append text to the end of a file.
 * @filename: The name of the file to append to.
 * @text_content: The text content to be added.
 * Return: 1 if the file exists, -1 if it does not exist or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int descrp;
int lett;
int bts;
if (!filename)
return (-1);
descrp = open(filename, O_WRONLY | O_APPEND);
if (descrp == -1)
return (-1);
if (text_content)
{
lett = 0;
while (text_content[lett])
lett++;
bts = write(descrp, text_content, lett);
if (bts == -1)
return (-1);
}
close(descrp);
return (1);
}
