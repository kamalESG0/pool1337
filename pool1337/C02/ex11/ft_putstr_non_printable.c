/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kessghio <kessghio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 10:34:57 by kessghio          #+#    #+#             */
/*   Updated: 2024/07/01 15:27:36 by kessghio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hexa(char i)
{
	char	a;
	char	b;
	char	*hexa;

	write(1, "\\", 1);
	hexa = "0123456789abcdef";
	a = hexa[i / 16];
	b = hexa[i % 16];
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str < 32 || *str == 127)
		{
			print_hexa(*str);
		}
		else
		{
			write(1, str, 1);
		}
		str++;
	}
}
