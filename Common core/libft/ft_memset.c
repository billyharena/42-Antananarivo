/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarley <bmarley@student.42antananari      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:57:12 by bmarley           #+#    #+#             */
/*   Updated: 2024/02/24 14:31:18 by bmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ret;
	unsigned char	val;

	i = 0;
	ret = s;
	val = c;
	while (i < n)
	{
		ret[i] = val;
		i++;
	}
	return (ret);
}
