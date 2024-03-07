/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarley <bmarley@student.42antananari      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:42:03 by bmarley           #+#    #+#             */
/*   Updated: 2023/11/14 13:25:18 by bmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	rep;

	i = 1;
	rep = 1;
	if (power < 0)
		return (0);
	else if (power == 0 && nb == 0)
		return (1);
	while (i <= power)
	{
		rep = rep * nb;
		i++;
	}
	return (rep);
}
