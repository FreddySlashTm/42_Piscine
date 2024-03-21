#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(int ac, char **av)
{
	int i;

	i = 1;
	int len;
	if (ac < 1)
	{
		return(0);
	}
	else
	{
		while (ac > i)
		{
			len = ft_strlen(av[i]);
			ft_putchar ('0' + len);
			ft_putchar ('\n');
			i++;
		}
	}
	return (0);

}
