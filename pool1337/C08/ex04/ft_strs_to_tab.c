/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kessghio <kessghio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 10:52:56 by kessghio          #+#    #+#             */
/*   Updated: 2024/07/14 13:35:11 by kessghio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

char	*cpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*s2 != '\0')
	{
		s1[i] = *s2;
		i++;
		s2++;
	}
	s1[i] = '\0';
	return (s1);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			j;
	t_stock_str	*ptr;

	i = 0;
	ptr = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (ptr == NULL)
		return (NULL);
	while (i < ac)
	{
		j = len(av[i]);
		ptr[i].size = j;
		ptr[i].str = malloc(j * sizeof(char));
		ptr[i].copy = malloc(j * sizeof(char));
		cpy(ptr[i].str, av[i]);
		cpy(ptr[i].copy, ptr[i].str);
		i++;
	}
	return (ptr);
}
