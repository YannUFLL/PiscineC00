/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:47:25 by ydumaine          #+#    #+#             */
/*   Updated: 2022/01/17 12:35:48 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Fonction qui permet d'ecrire la valeur en argument dans le terminal en asci  

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

//Fonction de gestion de l'affichage dans le terminal 

void	ft_affi_valeurs(char u)
{
	int	c;
	int	d;

	if (u > 9)
	{
		c = u / 10;
		d = u % 10;
		ft_putchar(c + 48);
		ft_putchar(d + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(u + 48);
	}
}
//boucle d'echellonage des valeurs par ordre croissant

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{		
		b = a + 1;
		while (b <= 99)
		{	
			if (b != 01)
				ft_putchar(' ');
			ft_affi_valeurs(a);
			ft_putchar(' ');
			ft_affi_valeurs(b);
			if (a < 98)
				ft_putchar(',');
			b++;
		}
		a++;
	}
}
