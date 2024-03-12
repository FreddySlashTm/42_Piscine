/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:18:16 by alcastan          #+#    #+#             */
/*   Updated: 2024/03/11 12:23:12 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		else
			i++;
	}
	return (str);
}
/*
int main(void)
{
    char str[30] = "HOL4 ME LL4MO 4LFREDO";
    printf("La frase es: %s\n", str);
    ft_strlowcase(str);
    printf("La frase nueva es: %s\n", str);
}
*/
