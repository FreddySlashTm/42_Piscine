#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

char	*ft_strrev(char *str)
{
	int i;
	int j;
	char aux;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	while (i > j)
	{
		aux = str[i];
		str[i] = str[j];
		str[j] = aux;
	}
	return (str);
}
