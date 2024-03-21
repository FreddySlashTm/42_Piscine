#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_change(char *str, char s, char d)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == s)
		{
			str[i] = d;
		}
		ft_putchar(str[i]);
		i++;
	}
}

int	main (int ac, char **av)
{
	if (ac != 4)
	{
		ft_putchar('\n');
	}
	else
	{
		ft_change(av[1], av[2][0], av[3][0]);
	}
}
