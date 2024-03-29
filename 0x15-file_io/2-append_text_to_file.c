#include "main.h"

/**
 * append_text_to_file - Function that creates a file
 * @filename: type char filename pointer of FD
 * @text_content: type char pointer of char
 * Return: -1 if NULL in FN, 1 on sucess
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int final_out;
	int nlet;

	if(!filename)
		return(-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		for (nlet =0; text_content[nlet]; nlet++)
			;
		final_out = write(file, text_content, nlet);
		if (final_out == -1)
			return (-1);
	}
	close(file);
	return (1);
}
