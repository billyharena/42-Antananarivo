/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarley <bmarley@student.42antananari      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:36:23 by bmarley           #+#    #+#             */
/*   Updated: 2024/03/04 17:14:55 by bmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	unsigned int	i;
	unsigned int	dest_ln;
	unsigned int	total_ln;

	if (size == 0 && (!dest || !src))
		return (0);
	dest_ln = ft_strlen(dest);
	total_ln = dest_ln + ft_strlen(src);
	if (size == 0)
		return (ft_strlen(src));
	if (dest_ln <= size)
	{
		i = 0;
		while (src[i] != '\0' && dest_ln + i < size -1)
		{
			dest[dest_ln + i] = src[i];
			i++;
		}
		dest[dest_ln + i] = '\0';
	}
	else
		total_ln = total_ln - (dest_ln - size);
	return (total_ln);
}
