/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 18:42:15 by ydumaine          #+#    #+#             */
/*   Updated: 2022/01/13 19:34:01 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	lettre;

	lettre = 122;
	while (lettre > 96)
	{
		write(1, &lettre, 1);
		--lettre;
	}	
}	
