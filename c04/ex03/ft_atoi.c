/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:44:11 by alcastan          #+#    #+#             */
/*   Updated: 2024/03/15 12:31:16 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	while (*str)
	{
		if (*str == '+' || *str == '-')
		{
			if (*str == '-')
			{
				sign *= -1;
			}
		}
		if (*str >= '0' && *str <= '9')
		{
			num = num * 10 + (*str - '0');
		}
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
		{
			break ;
		}
		str++;
	}
	return (num * sign);
}
/*
#include <stdio.h>
int main (void)
{
    int num;

    char str[19] = "  ---+--+1234ab567";
    num = ft_atoi(str);
    printf("%i\n", num);
}
*/