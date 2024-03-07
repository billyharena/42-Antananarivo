/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarley <bmarley@student.42antananari      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 13:43:37 by bmarley           #+#    #+#             */
/*   Updated: 2024/02/29 09:30:22 by bmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isin(char const *s1, char c)
{
	while (*s1 != '\0')
	{
		if (*s1 == c)
			return (1);
		s1++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	start = 0;
	if (!s1 || !set)
		return (0);
	while (ft_isin(set, s1[start]))
		start++;
	end = ft_strlen((char *)s1) - 1;
	while (ft_isin(set, s1[end]))
		end--;
	return (ft_substr(s1, start, end - start + 1));
}
