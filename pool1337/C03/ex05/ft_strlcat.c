/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kessghio <kessghio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:36:46 by kessghio          #+#    #+#             */
/*   Updated: 2024/07/07 14:08:40 by kessghio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	x;

	j = 0;
	while (*dest != '\0')
	{
		dest++;
		j++;
	}
	x = 0;
	while (src[x] != '\0')
		x++;
	if (size <= j)
		return (x + size);
	i = 0;
	while (src[i] != '\0' && i < size - (j + 1))
	{
		*dest = src[i];
		dest++;
		i++;
	}
	*dest = '\0';
	return (j + x);
}
