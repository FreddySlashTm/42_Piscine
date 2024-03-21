#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void write_and_locate(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			//cosa
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			//la misma cosa
		}
	}
}
