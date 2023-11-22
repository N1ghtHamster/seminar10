#include <stdio.h>
#include <ctype.h>

void read_file(char *str, char *name)
{
	FILE *fp;
	if ((fp = fopen(name, "r")) != NULL)
	{
		fscanf(fp, "%[^\n]", str);
	}
	fclose(fp);
}

void write_file(char *str, char *name)
{
	FILE *fp;
	if ((fp = fopen(name, "w")) != NULL)
	{
		fprintf(fp, "%s", str);
	}
	fclose(fp);
}

void changing_char(char *str)
{
	int count = 1;
	char tmp;
	while (*str != '\0')
	{
		if (!isblank(*str))
		{
			if (count % 2 == 0 && !isblank(*str) && *(str - 1) != ' ')
			{
				tmp = *(str - 1);
				*(str - 1) = *(str);
				*str = tmp;
			}
			if (count % 2 == 0 && *(str - 1) == ' ' && !isblank(*str))
			{
				tmp = *(str - 2);
				*(str - 2) = *str;
				*str = tmp;
			}
			count++;
		}
		str++;
	}
}

int main(int argc, char **argv)
{
	char file_read[] = "in10_1.txt";
	char file_write[] = "out10_1.txt";
	char str[1000];
	read_file(str, file_read);
	changing_char(str);
	write_file(str, file_write);
	return 0;
}

