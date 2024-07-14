/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kessghio <kessghio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 17:59:37 by kessghio          #+#    #+#             */
/*   Updated: 2024/06/27 16:52:26 by kessghio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	int_char(int i)
{
	int	a;
	int	b;

	if (i < 10)
	{
		ft_print('0');
		ft_print(i + '0');
	}
	else
	{
		a = i / 10;
		b = i % 10;
		ft_print(a + '0');
		ft_print(b + '0');
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			int_char(i);
			ft_print(' ');
			int_char(j);
			if (i != 98)
			{
				ft_print(',');
				ft_print(' ');
			}
			j++;
		}
		i++;
	}
}
