/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kessghio <kessghio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 10:11:12 by kessghio          #+#    #+#             */
/*   Updated: 2024/07/13 15:41:42 by kessghio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// to calcule th length of **strs
int	len(int size, char **str)
{
	int	i;
	int	j;
	int	k;

	k = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			j++;
			k++;
		}
		i++;
	}
	return (k);
}

// to calcule the length of sep
int	lent(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// strcat to concatenate the sep
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	ptr = malloc((len(size, strs) + (lent(sep) * size - 1)) * sizeof(char) + 1);
	if (ptr == NULL)
		return (0);
	*ptr = '\0';
	while (i < size)
	{
		j = 0;
		ft_strcat(ptr, strs[i]);
		if (i < size - 1)
		{
			ft_strcat(ptr, sep);
		}
		i++;
	}
	return (ptr);
}
