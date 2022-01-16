/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:22:17 by ydumaine          #+#    #+#             */
/*   Updated: 2022/01/13 20:01:11 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	chiffre;

	chiffre = 48;
	while (chiffre < 58)
	{
		write(1, &chiffre, 1);
		++chiffre;
	}	
}	
