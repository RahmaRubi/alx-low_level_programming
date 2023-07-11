#include "main.h"
/**
 * create_file - create a file and truncate
 * @filename: file name to be created
 * @text_content: content to be added
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fp, i, w;

	i = 0;
	if (filename == NULL)
		return (-1);
	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0060);
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
