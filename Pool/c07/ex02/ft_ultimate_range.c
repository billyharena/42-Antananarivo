/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarley <bmarley@student.42antananari      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 08:41:04 by bmarley           #+#    #+#             */
/*   Updated: 2023/11/20 09:59:31 by bmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = malloc((max - min) * sizeof(int));
	if (tab != NULL)
	{
		while (min < max)
		{
			tab[i] = min;
			min++;
			i++;
		}
		*range = tab;
	}
	else
		return (-1);
	return (i);
}
