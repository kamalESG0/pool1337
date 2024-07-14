/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kessghio <kessghio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 20:00:21 by kessghio          #+#    #+#             */
/*   Updated: 2024/07/08 08:40:15 by kessghio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	j;

	j = 1;
	i = 1;
	if (power == 0)
		return (1);
	else if (power < 0 || nb == 0)
		return (0);
	while (i <= power)
	{
		j = nb * j;
		i++;
	}
	return (j);
}
