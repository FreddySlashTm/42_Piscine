/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 10:40:54 by alcastan          #+#    #+#             */
/*   Updated: 2024/03/17 10:40:57 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power > 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	else
		return (nb);
}

/*
#include <stdio.h>
int main (void)
{
	int nb;
	int power;

	nb = 5;
	power = 2;
	nb = ft_recursive_power(nb, power);
	printf("Result: %i", nb);
}
*/