#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main (int ac, char **av)
{
	int i;
	int j;

	i = 0;
	j = ac - 1;
	if (ac <= 1)
	{
		ft_putchar('\n');
	}
	else
	{
		while (av[j][i] != '\0')
		{
			ft_putchar(av[j][i]);
			i++;
		}
	}
}
