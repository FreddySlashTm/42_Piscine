/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:33:02 by alcastan          #+#    #+#             */
/*   Updated: 2024/03/11 18:42:36 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	dest[i] = '\0';
	return (j);
}
/*
int main (void)
{
    char source[10] = "efgh";
    char destino[10];

    printf("Source es: %s\n", source);
    printf("Dest es: %s\n", destino);

    unsigned int result = ft_strlcpy(destino, source, 10);

    printf("Expected: 'efgh', Result: '%s'\n", destino);
    printf("Expected Length: 4, Result length: %u\n", result);
}
*/