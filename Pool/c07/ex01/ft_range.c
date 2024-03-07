/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarley <bmarley@student.42antananari      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 14:45:46 by bmarley           #+#    #+#             */
/*   Updated: 2023/11/20 09:56:39 by bmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ret;

	i = 0;
	ret = NULL;
	if (min >= max)
		return (ret);
	ret = malloc((max - min) * sizeof(int));
	if (ret != NULL)
	{
		while (min < max)
		{
			ret[i] = min;
			min++;
			i++;
		}
	}
	else
		return (ret);
	return (ret);
}
