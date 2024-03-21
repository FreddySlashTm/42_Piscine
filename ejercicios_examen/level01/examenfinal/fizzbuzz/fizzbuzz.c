#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_fizz(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write (1, "fizzbuzz", 8);
		else if(i % 3 == 0)
			write (1, "fizz", 4);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else if (i >= 10)
		{
			ft_putchar('0' + i / 10);
			ft_putchar('0' + i % 10);
		}
		else
		{
			ft_putchar('0' + i);
		}
		ft_putchar('\n');
		i++;
	}
}

int	main(void)
{
	ft_fizz();
}
