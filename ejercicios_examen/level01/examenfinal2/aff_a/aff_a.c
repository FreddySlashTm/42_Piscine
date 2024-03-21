#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_check(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'a')
		{
			ft_putchar('a');
			break ;
		}
		i++;
	}
	ft_putchar('\n');
}

int	main (int ac, char **av)
{
	
	if (ac <= 1)
	{
		ft_putchar('a');
		ft_putchar('\n');
	}
	else
	{
		ft_check(av[1]);
	}
	
}
