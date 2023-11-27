#include <stdio.h>
#include <string.h>

void change_path(char *str, char *dst)
{
	int lenstr = strlen(str);
	int lentmp = 0, lenend = 0;
	int position = 0;
	char *tmp = NULL, *end = NULL;
	tmp = strrchr(str, '/');
	while (*tmp++ != '\0'){lentmp++;}
	tmp = strrchr(str, '/');
	end = strrchr(tmp, '.');
	if (end != NULL && *(end + 1) != '\0')
		while (*end++ != '\0'){lenend++;}
	end = strrchr(tmp, '.');
	if (end != NULL && *(end + 1) == '\0')
		position = lenstr - 1;
	else if (tmp != NULL && end == NULL)
		position = lenstr;
	else if (tmp != NULL && end != NULL)
		position = lenstr - lenend;
	else
		position = lenstr - lentmp - lenend;
	strncpy(dst, str, position);
	strcat(dst, ".html\0");
}
