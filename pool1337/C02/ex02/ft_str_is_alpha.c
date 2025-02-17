/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kessghio <kessghio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 09:01:23 by kessghio          #+#    #+#             */
/*   Updated: 2024/06/30 17:18:48 by kessghio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		if (*str < 65 || *str > 122 || (*str > 90 && *str < 97))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
