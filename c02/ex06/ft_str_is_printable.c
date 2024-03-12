/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcastan <alcastan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:09:06 by alcastan          #+#    #+#             */
/*   Updated: 2024/03/11 11:19:38 by alcastan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= 32 && str[i] != 127)
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}
/*
int main(void)
{
    char str[5] = "     ";
    int inspector = ft_str_is_printable(str);
    printf("El inspector dice que: %i\n", inspector);
    return (0);
}
*/
