#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_str_len(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

void	ft_rev_print(char *str)
{
	int len = ft_str_len(str);
	while (len >= 0)
	{
		ft_putchar(str[len]);
		len--;
	}
}

int main (int ac, char **av)
{
	if (ac == 1)
	{
		ft_rev_print (av[0]);
		ft_putchar ('\n');
	}
	else
	{
		ft_rev_print (av[1]);
		ft_putchar ('\n');
	}
}
