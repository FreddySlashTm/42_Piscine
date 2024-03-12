/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 09:13:53 by alcastan          #+#    #+#             */
/*   Updated: 2024/03/07 12:59:25 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	aux;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		aux = tab[i];
		tab[i] = tab[j];
		tab[j] = aux;
		j--;
		i++;
	}
}
/*
int main (void)
{
    int lista[8] = {2, 5, 7, 3, 6, 1, 8};
    int size = 8;

    int limit = 0;

    while(limit < size)
    {
        printf("El antiguo orden es: %i\n", lista[limit]);
        limit++;
    }
    ft_rev_int_tab(lista, size);
    limit = 0;
    while(limit < size)
    {
        printf("El nuevo orden es: %i\n", lista[limit]);
        limit++;
    }
    return(0);
}
*/
