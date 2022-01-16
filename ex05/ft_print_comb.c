/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 11:10:11 by ydumaine          #+#    #+#             */
/*   Updated: 2022/01/14 12:12:38 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Fonction qui permet d'ecrire la valeur en argument dans le terminal en asci  

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//Fonction de gestion de l'affichage dans le terminal 

void	ft_affi_valeurs(char a, char b, char c)
{
	ft_putchar(a + 48);
	ft_putchar(b + 48);
	ft_putchar(c + 48);
	ft_putchar(',');
	ft_putchar(' ');
}

//boucle d'echellonage des valeurs par ordre croissant

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_affi_valeurs(a, b, c);
				c++ ;
			}
			b++ ;
		}
		a++ ;
	}
}
