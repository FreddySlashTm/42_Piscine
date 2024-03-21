#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

int	main (int ac, char** av)
{
	int i = 0;
	if (ac <= 1)
	{
		ft_putchar ('\n');
		return (0);
	}
	else if (ac < 3)
	{
		ft_putchar ('2');
		return (0);
	}
	else if (ac == 3)
	{
		ft_strcpy(av[1], av[2]);
		while (av[2][i] != '\0')
		{
			ft_putchar (av[2][i]);
			i++;
		}
		av[2][i] = '\0';
		return (0);
	}
}
