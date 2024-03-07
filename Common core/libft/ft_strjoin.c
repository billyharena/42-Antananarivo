/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarley <bmarley@student.42antananari      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 09:32:59 by bmarley           #+#    #+#             */
/*   Updated: 2024/02/29 09:33:18 by bmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_total_size(char const *s1, char const *s2)
{
	int	ts1;
	int	ts2;

	ts1 = ft_strlen((char *)s1);
	ts2 = ft_strlen((char *)s2);
	return (ts1 + ts2);
}

static	char	*ft_strcat(char *res, char *s1, char *s2)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s1[j] != '\0')
	{
		res[i] = s1[j];
		i++;
		j++;
	}
	while (s2[k] != '\0')
	{
		res[i] = s2[k];
		i++;
		k++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;

	if (!s1 || !s2)
		return (0);
	res = malloc((ft_total_size(s1, s2) + 1) * sizeof(char));
	if (res == NULL)
		return (0);
	res = ft_strcat(res, (char *)s1, (char *)s2);
	return (res);
}
