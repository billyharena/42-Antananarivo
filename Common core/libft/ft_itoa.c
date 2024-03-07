/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarley <bmarley@student.42antananari      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 09:32:31 by bmarley           #+#    #+#             */
/*   Updated: 2024/02/29 09:32:50 by bmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_size(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size = 1;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static	int	ft_sign(int n)
{
	int	ret;

	ret = 1;
	if (n < 0)
		ret *= -1;
	return (ret);
}

char	*ft_itoa(int n)
{
	unsigned int	nb;
	char			*res;
	int				sg;
	int				size;

	sg = ft_sign(n);
	size = ft_size(n);
	nb = n;
	if (sg != 1)
		nb = n * -1;
	res = malloc((size + 1) * sizeof(char));
	if (res != NULL)
	{
		res[size--] = '\0';
		while (size >= 0)
		{
			res[size] = nb % 10 + '0';
			nb = nb / 10;
			size--;
		}
		if (sg != 1)
			res[0] = '-';
	}
	return (res);
}
