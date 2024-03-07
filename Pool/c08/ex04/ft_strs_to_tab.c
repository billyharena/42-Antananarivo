/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarley <bmarley@student.42antananari      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:51:56 by bmarley           #+#    #+#             */
/*   Updated: 2023/11/23 12:11:47 by bmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		tsrc;
	char	*dest;

	tsrc = ft_strlen(src);
	dest = malloc((tsrc + 1) * sizeof(char));
	if (dest != NULL)
		dest = ft_strcpy(dest, src);
	else
		return (0);
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*rep;

	i = 0;
	if (ac < 1)
		ac = 0;
	rep = malloc((ac + 1) * sizeof(t_stock_str));
	if (rep != NULL)
	{
		while (i < ac)
		{
			rep[i].size = ft_strlen(av[i]);
			rep[i].str = av[i];
			rep[i].copy = ft_strdup(rep[i].str);
			i++;
		}
		rep[i].str = 0;
	}
	else
		return (NULL);
	return (rep);
}
