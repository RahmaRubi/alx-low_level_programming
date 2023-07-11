#include "main.h"
/**
 * read_textfile - read text
 * @filename: filename
 * @letters: how many letters should be read
 * Return: no read charchters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int r, w;
	int fp;
	char *buff;

	if (filename == NULL)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp < 0)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(fp);
		return (0);
	}
	r = read(fp, buff, letters);
	if (r < 0)
	{
		close(fp);
		free(buff);
		return (0);
	}
	w = write(1, buff, r);
	if (w < 0)
	{
	close(fp);
	free(buff);
	return (0);
	}
	close(fp);
	free(buff);
	return (r);




}
