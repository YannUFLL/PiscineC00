/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydumaine <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 16:22:16 by ydumaine          #+#    #+#             */
/*   Updated: 2022/01/13 19:01:34 by ydumaine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	lettre;

	lettre = 97;
	while (lettre < 123)
	{
		write(1, &lettre, 1);
		++lettre;
	}	
}	
