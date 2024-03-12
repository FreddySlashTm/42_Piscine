/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:38:48 by alcastan          #+#    #+#             */
/*   Updated: 2024/03/10 13:25:54 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
    char source[20] = "Hola";
    char destino[20] = "HelloWorld";

    printf("La frase source es: %s\n", source);
    printf("La frase destino es: %s\n", destino);

    ft_strcpy(destino, source);

    printf("La frase source es: %s\n", source);
    printf("La frase destino es: %s\n", destino);
    return(0);
}
*/
