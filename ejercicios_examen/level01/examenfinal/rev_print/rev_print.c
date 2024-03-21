#include <unistd.h>
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

char *ft_rev_print(char *str)
{
	int len;
	int j;
	char aux;

	len = 0;
	j = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len--;
	while (len > j)
	{
		aux = str[len];
		str[len] = str[j];
		str[j] = aux;
		len--;
		j++;
	}
	return(str);
}

int	main (int ac, char **av)
{
	int i;

	i = 0;
	if (ac <= 1)
		ft_putchar ('\n');
	else
	{
		ft_rev_print(av[1]);
		while (av[1][i] != '\0')
		{
			ft_putchar(av[1][i]);
			i++;
		}
	}
}
