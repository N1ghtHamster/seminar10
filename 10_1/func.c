#include <ctype.h>

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
