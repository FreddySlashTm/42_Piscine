/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 11:17:38 by alcastan          #+#    #+#             */
/*   Updated: 2024/03/17 11:17:40 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (i <= 0)
	{
		return (0);
	}
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

/*
#include <stdio.h>
int main (void)
{
	int nb;
	int result;

	nb = 144;
	result = ft_sqrt(nb);
	printf("Result: %i\n", result);
}
*/