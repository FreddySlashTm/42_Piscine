/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcallejo <jcallejo@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 10:08:11 by jcallejo          #+#    #+#             */
/*   Updated: 2024/03/02 16:01:03 by jcallejo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c); // referencia a putchar

void	firstline(int x) // esta función se encarga de la primera línea horizontal creada
{
	int	i;
			// contador para avanzar de líneas
	i = 0;	// seteo del contador a 0
	while (x > i) //mientras que hayan líneas pendientes...
	{
		if (i == 0)	//si i es 0, es el primer caracter
		{
			ft_putchar('/');	//por tanto empezamos con /
			i++;	//suma contador
		}
		else if (i == x - 1) //si no es así pero es exactamente el final de la línea (x-1)
		{
			ft_putchar('\\'); //ponemos el final 
			i++; // llegamos al final de i, cuando es i == x.
		}
		else
		{
			ft_putchar('*'); //si no es ni principio ni final, es relleno (*)
			i++; //sumamos contador
		}
	}
}

void	print_body(int x) // esta función se encarga del relleno, tanto de los bordes como
{						// de la parte vacía.
	int	i; //contador

	i = 0; //seteamos contador
	while (x > i) //mientras que hayan líneas pendientes
	{
		if (i == 0 || i == x - 1) //si es la primera o la última...
		{
			ft_putchar('*'); //escribes (*). Son los bordes de la caja
			i++; //aumenta contador
		}
		else //si no es la primera o la ultima
		{
			ft_putchar(' '); //hueco vacio
			i++; //aumenta contador
		}
	}
}

void	lastline(int x) //esta función se encarga de escribir la ultima fila
{
	int	i; //contador

	i = 0; //seteamos contador
	while (x > i) //mientras hayan lineas pendientes...
	{
		if (i == 0) //si es la primera, coloca barra invertida
		{
			ft_putchar('\\');
			i++; // aumenta contador
		}
		else if (i == x - 1) //si es la última, coloca barra
		{
			ft_putchar('/');
			i++;//aumenta contador
		}
		else
		{
			ft_putchar('*'); //si no es la primera ni la ultima, coloca (*), relleno.
			i++;
		}
	}
}

void	rush(int x, int y) //esta función se encarga de combinar las funciones de linea
{							// con putchar para crear la caja con los parametros x e y
	int	i; //creamos contador

	i = 2; // lo seteamos a 2 por si se pide solo primera y segunda linea.
	firstline(x); // creamos primera linea llamando a su función
	ft_putchar('\n'); // saltamos de linea para continuar, si no hay valor en las variables
					// se aplica el salto de línea.
	if (y > 1) // si se piden más de 1 columna...
	{
		while (y > i) // mientras hayan columnas por escribir
		{
			print_body(x); //se escribe el cuerpo y los laterales
			i++; //aumenta contador
			ft_putchar('\n');// se crea salto de línea
		}
		//En este punto, ya se han escrito todas las columnas con sus huecos vacíos.
		lastline(x); //se escribe la última línea
		ft_putchar('\n'); //salto de línea y fin
	}
}
