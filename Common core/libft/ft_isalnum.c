/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarley <bmarley@student.42antananari      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 13:49:32 by bmarley           #+#    #+#             */
/*   Updated: 2024/03/04 10:53:58 by bmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	ret;

	ret = 0;
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		ret = 1;
	return (ret);
}
