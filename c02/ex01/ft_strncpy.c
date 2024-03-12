/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 18:34:25 by alcastan          #+#    #+#             */
/*   Updated: 2024/03/10 11:35:53 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main (void)
{
    char source[9] = "00000000";
    char destiny[19] = "456654256464234523";

    printf("El número a es: %s\n", source);
    printf("El número b es: %s\n", destiny);
    printf("Copiamos 4 letras de a en b \n");
    ft_strncpy(destiny, source, 20);
    printf("El número a es: %s\n", source);
    printf("El número b es: %s\n", destiny);
}
*/