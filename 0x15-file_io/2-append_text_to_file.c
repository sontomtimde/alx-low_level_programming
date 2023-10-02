#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to append to the end of the file.
 *
 * Return: On success, 1 (indicating success); on failure, -1.
 *Possible failure cases include a NULL filename,
 *inability to open the file, or write operation failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int o, m, len = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}

o = open(filename, O_WRONLY | O_APPEND);
m = write(o, text_content, len);

if (o == -1 || m == -1)
return (-1);

close(o);

return (1);
}

