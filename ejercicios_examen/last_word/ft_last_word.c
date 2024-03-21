
#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_last_word_writer(int index)
{
    while (str[index] != '\0')
    {
        ft_putchar(str[index]); //ARRRRRRRRRRRRGGGGGGGGGG
        index++;
    }
}

void ft_reverse_reading(int index)
{

    while (index != 0)
    {
        i--;
    }
}

int ft_last_word_index(char *str)
{
    int i;

    i = 0;
    while (str[i + 1] != '\0')
    {
        i++;
    }
    return(i);
}

int main (int argc, char **argv)
{
    int i;
    char *ladywriter;
    
    i = 0;
    if (argc > 1)
    {
        while (i < argc)
        {
            ft_last_word(argv[i]);
            i++;
        }
    }
    return (0);
}