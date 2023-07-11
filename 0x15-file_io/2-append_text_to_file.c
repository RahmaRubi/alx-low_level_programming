#include "main.h"
/**
 * append_text_to_file - create a file and truncate
 * @filename: file name to be created
 * @text_content: content to be added
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, i, w;

	i = 0;
	if (filename == NULL)
		return (-1);
	fp = open(filename, O_APPEND | O_WRONLY);
	if (fp == -1)
		return (-1);
	while (text_content && text_content[i] != '\0')
		i++;
	w = write(fp, text_content, i);
	if (w == -1)
	{
		close(fp);
		return (-1);
	}
	close(fp);
	return (1);




}
