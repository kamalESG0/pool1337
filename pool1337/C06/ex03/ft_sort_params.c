/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kessghio <kessghio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 18:02:44 by kessghio          #+#    #+#             */
/*   Updated: 2024/07/08 15:52:37 by kessghio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_swp(char **p, char **pt)
{
	char	*temp;

	temp = *p;
	*p = *pt;
	*pt = temp;
}

void	ftprint(int argc, char **argv)
{
	int		i;
	char	*ar;

	i = 1;
	while (i < argc)
	{
		ar = argv[i];
		while (*ar != '\0')
		{
			write(1, ar, 1);
			ar++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			k = i + 1;
			while (k < argc)
			{
				j = 0;
				while (argv[i][j] == argv[k][j])
					j++;
				if (argv[i][j] > argv[k][j])
					ft_swp(&argv[i], &argv[k]);
				k++;
			}
			i++;
		}
		ftprint(argc, argv);
	}
	return (0);
}
