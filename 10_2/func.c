void delete_space(char *str)
{
	int flag = 0;
	while (*str)
	{
		if (*str == ' ')
		{
			flag = 1;
			str++;
			if (flag == 1 && *(str - 1) == ' ')
			{
				tmp = *str;
				*(str - 1) = *str;
				flag = 0;
			}
		}
		if (flag == 0 
			
	}
}

