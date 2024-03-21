#include <stdio.h>
void ft_swap(int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main (int argc, char **argv)
{
    if (argc < 1)
    {
        printf("Mete dos números mostro\n");
    }
    
    int a = argv[1][0]; //No valdría porque son chars pero yokse pa probar
    int b = argv[2][0];
    printf("Los números son: %i y %i\n", a, b);
    ft_swap(&a, &b);
    printf("Swapeando\n");
    printf("Los números ahora son: %i y %i\n", a, b);
}