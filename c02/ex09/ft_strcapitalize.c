/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:24:59 by alcastan          #+#    #+#             */
/*   Updated: 2024/03/11 14:30:56 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if (j == 1 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		else if (j == 0 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		if ((str[i] < 48) || (str[i] > 57 && str[i] < 65))
			j = 1;
		else if ((str[i] > 90 && str[i] < 97) || str[i] > 122)
			j = 1;
		else
			j = 0;
		i++;
	}
	return (str);
}
/*
int main(void)
{
    char str[25] = "hola me ll4mo ? alfredo.";
    printf("La frase es: %s\n", str);
    ft_strcapitalize(str);
    printf("Ahora la frase es: %s\n", str);
}
*/
