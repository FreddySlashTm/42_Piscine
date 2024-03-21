/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 10:16:31 by alcastan          #+#    #+#             */
/*   Updated: 2024/03/17 10:16:33 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	aux;

	aux = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power >= 1)
	{
		aux *= nb;
		power--;
	}
	return (aux);
}

/*
#include <stdio.h>
int main (void)
{
	int nb;
	int power;

	nb = -5;
	power = 3;
	nb = ft_iterative_power(nb, power);
	printf("Result: %i", nb);
}
*/