/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarley <bmarley@student.42antananari      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:43:32 by bmarley           #+#    #+#             */
/*   Updated: 2023/11/14 11:42:15 by bmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	rep;

	i = 2;
	rep = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		rep = rep * i;
		i++;
	}
	return (rep);
}
