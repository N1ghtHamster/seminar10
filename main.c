#include <stdio.h>
#include <ctype.h>

void read_file(char *str, char *name)
{
	FILE *fp;
	if ((fp = fopen(name, "r")) != NULL)
	{
		printf("File is read!");
		fscanf(fp, "%[^\n]", str);
	}
	fclose(fp);
}

void changing_char(char *str)
{
	int count = 1;
	char tmp;
	while (*str != '\0')
	{
		if (isalnum(*str))
		{
			if(count % 2 == 0)
			{
				tmp = *(str - 1);
				printf("%c\n", *(str - 1));
				printf("-----");
				*(str - 1) = *(str);
				printf("%c\n", *(str - 1));
				printf("-----");
				*str = tmp;
				printf("%c\n", *str);
				printf("-----");
			}
			count++;
		}
		if (count % 2 != 0 && *str == ' ')
		{
			tmp = *(str - 1);
			*(str - 1) = *(str + 1);
			*(str + 1) = tmp;
			printf("\n%c\n", *(str + 1));
			printf("%c\n", *(str - 1));
		}
		//count++;
		str++;
	}
	printf("\n%d", count);
}

int main(int argc, char **argv)
{
	char name[] = "in10_1.txt";
	char str[1000];
	read_file(str, name);
	printf("\n%s\n", str);
	changing_char(str);
	printf("\n%s", str);
	return 0;
}

