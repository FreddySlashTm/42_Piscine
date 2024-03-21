#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_ulstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	main (int ac, char **av)
{
	int i;

	i = 0;
	if (ac <= 1)
		ft_putchar('\n');
	else
	{
		ft_ulstr(av[1]);
	}
}
