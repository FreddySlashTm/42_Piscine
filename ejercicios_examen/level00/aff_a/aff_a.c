#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_put_a(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
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

int main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putchar('\n');
	}
	else
	{
		ft_put_a(argv[1]);
	}
}
