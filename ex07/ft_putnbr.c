/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 11:49:57 by ydumaine          #+#    #+#             */
/*   Updated: 2022/01/16 20:13:29 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_print(int nbr, int x)
{
	int	a;
	int	i;
	int	u;

	a = nbr / x;
	ft_putchar(a + 48);
	i = x;
	while ((nbr % i) < (i / 10) && nbr > 10)
	{
		ft_putchar(48);
		u = nbr - (i + (nbr % i));
		nbr = nbr - u;
		i = i / 10;
	}
	nbr = nbr % i;
	return (nbr);
}

void	ft_main_print(int nbr)
{
	int	x;

	x = 1000000000;
	while (nbr >= 1000000000)
		nbr = ft_print(nbr, x);
	while (nbr >= 100000000)
		nbr = ft_print(nbr, (x / 10));
	while (nbr >= 10000000)
		nbr = ft_print(nbr, (x / 100));
	while (nbr >= 1000000)
		nbr = ft_print(nbr, (x / 1000));
	while (nbr >= 100000)
		nbr = ft_print(nbr, (x / 10000));
	while (nbr >= 10000)
		nbr = ft_print(nbr, (x / 100000));
	while (nbr >= 1000)
		nbr = ft_print(nbr, (x / 1000000));
	while (nbr >= 100)
		nbr = ft_print(nbr, (x / 10000000));
	while (nbr >= 10)
		nbr = ft_print(nbr, (x / 100000000));
	ft_putchar(nbr + 48);
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{	
		nbr = nbr - (2 * nbr);
		write(1, "-", 1);
	}
	ft_main_print(nbr);
}
