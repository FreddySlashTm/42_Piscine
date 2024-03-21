#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main (int argc, char **argv)
{
    int i = 1;
    int len = 0;
    if (argc < 1)
    {
        ft_putchar('0');
    }

    while (i < argc)
    {
        len = ft_strlen(argv[i]);
        ft_putchar('0' + len);
        ft_putchar('\n');
        i++;
    }
    return (0);
}