/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarley <bmarley@student.42antananari      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:31:11 by bmarley           #+#    #+#             */
/*   Updated: 2023/11/15 11:00:01 by bmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

char	**ft_sort(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*tab;

	i = 0;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				tab = argv[i];
				argv[i] = argv[j];
				argv[j] = tab;
			}
			j++;
		}
		i++;
	}
	return (argv);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	argv = ft_sort(argc, argv);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
