#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_repeater(char c)
{
	int i;

	i = 96;
	if (c >= 'a' && c <= 'z')
	{
		i = (i - c) * -1;
		while (i >= 1)
		{
			ft_putchar(c);
			i--;
		}
	}
}

void	ft_writer(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_repeater(str[i]);
		i++;
	}
}

int	main (int ac, char **av)
{
	if (ac <= 1 || ac > 2)
	{
		ft_putchar('\n');
	}
	else
	{
		ft_writer(av[1]);
		ft_putchar('\n');
	}
}
