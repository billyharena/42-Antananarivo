/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarley <bmarley@student.42antananari      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 14:43:48 by bmarley           #+#    #+#             */
/*   Updated: 2024/03/04 17:01:51 by bmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*ret;
	size_t		ts;

	ts = ft_strlen(s);
	if (!s)
		return (0);
	if (ts <= start)
		return (ft_strdup(""));
	if (ts - start < len)
		len = ts - start;
	ret = malloc((len + 1) * sizeof(char));
	if (!ret)
		return (0);
	ret = ft_memcpy(ret, s + start, len);
	ret[len] = '\0';
	return (ret);
}
