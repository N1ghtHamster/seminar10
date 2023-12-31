#include <stdio.h>

void changing_char(char *str);

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

