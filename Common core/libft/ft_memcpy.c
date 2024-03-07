/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarley <bmarley@student.42antananari      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:20:41 by bmarley           #+#    #+#             */
/*   Updated: 2024/03/04 17:05:58 by bmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*ret;
	const unsigned char	*sr;

	i = 0;
	if (!src && !dest)
		return (NULL);
	ret = dest;
	sr = src;
	while (i < n)
	{
		ret[i] = sr[i];
		i++;
	}
	return (ret);
}
