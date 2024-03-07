/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarley <bmarley@student.42antananari      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 13:40:31 by bmarley           #+#    #+#             */
/*   Updated: 2024/02/26 13:57:47 by bmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, char *src)
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

char	*ft_strdup(const char *src)
{
	int		tsrc;
	char	*dest;

	tsrc = ft_strlen((char *)src);
	dest = malloc((tsrc + 1) * sizeof(char));
	if (dest != NULL)
	{
		dest = ft_strcpy(dest, (char *) src);
	}
	else
		return (0);
	return (dest);
}
