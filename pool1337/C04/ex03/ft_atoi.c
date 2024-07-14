/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kessghio <kessghio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 17:08:56 by kessghio          #+#    #+#             */
/*   Updated: 2024/07/07 08:45:34 by kessghio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sign(int i)
{
	if (i % 2 != 0)
		return (-1);
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = 0;
	j = 0;
	while ((*str >= 9 && *str <= 12) || *str == 32)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			i++;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		k = (k * 10) + (*str - 48);
		str++;
	}
	return (ft_sign(i) * k);
}
