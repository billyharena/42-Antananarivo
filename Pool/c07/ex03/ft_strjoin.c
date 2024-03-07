/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarley <bmarley@student.42antananari      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 13:46:53 by bmarley           #+#    #+#             */
/*   Updated: 2023/11/20 09:46:52 by bmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_size(char **strs, char *sep, int size)
{
	int	tstrs;
	int	i;
	int	tsep;
	int	total;

	i = 0;
	tstrs = 0;
	tsep = ft_strlen(sep);
	while (i < size)
	{
		tstrs = tstrs + ft_strlen(strs[i]);
		i++;
	}
	total = tstrs + tsep + size - 1;
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		ts;
	int		i;

	ts = ft_size(strs, sep, size);
	i = 0;
	tab = malloc(ts * sizeof(char));
	if (size == 0)
	{
		tab = NULL;
		return (tab);
	}
	else
	{
		while (i < size)
		{
			tab = ft_strcat(tab, strs[i]);
			if (i != size -1)
				tab = ft_strcat(tab, sep);
			i++;
		}
	}
	return (tab);
}
