/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 09:34:52 by alcastan          #+#    #+#             */
/*   Updated: 2024/03/18 09:34:54 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;
	int	j;

	i = 0;
	j = nb + 1;
	if (nb <= 1)
		return (2);
	while (j > nb)
	{
		i = 2;
		while (i * i <= j)
		{
			if (j % i == 0)
				break ;
			i++;
		}
		if (i * i > j)
			return (j);
		j++;
	}
	return (0);
}
/*
#include <stdio.h>
int main (void)
{
	int nb;
	int primo;

	nb = 7;
	primo = ft_find_next_prime(nb);
	printf("Result: %i", primo);
}
*/