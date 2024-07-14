/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kessghio <kessghio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 16:12:29 by kessghio          #+#    #+#             */
/*   Updated: 2024/07/02 09:41:10 by kessghio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int	is_digit(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

char	to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	new_word;
	int	i;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (is_alpha(str[i]) == 1)
		{
			if ((new_word == 1) && (i == 0 || is_digit(str[i - 1]) != 1))
			{
				str[i] = to_upper(str[i]);
			}
			else
			{
				str[i] = to_lower(str[i]);
			}
			new_word = 0;
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}
