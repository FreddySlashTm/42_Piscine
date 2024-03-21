/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:56:48 by alcastan          #+#    #+#             */
/*   Updated: 2024/03/13 15:56:49 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_first_word(char *str)
{
   int i;

   i = 0;
   while (str[i] != '\0' && str[i] == ' ')
   {
        i++;
   }
   while (str[i] != '\0' && str[i] != ' ')
   {
        ft_putchar(str[i]);
        i++;
   }

}

int main (int argc, char **argv)
{
    if (argc == 1)
    {
        printf("Solo me has pasado el argumento del nombre del programa");
    } 
    if (argc > 1)
    {
        int i;
        int j;

        i = 1;
        j = 0;
        printf("Hay más de dos argumentos\n");
        while (i < argc)
        {
            ft_first_word(&argv[i][j]);
            ft_putchar('\n');
            i++;
        }
        
    }
}