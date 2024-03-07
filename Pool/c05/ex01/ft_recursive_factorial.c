/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarley <bmarley@student.42antananari      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:57:11 by bmarley           #+#    #+#             */
/*   Updated: 2023/11/14 11:52:37 by bmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	rep;

	rep = 1;
	if (nb == 1 || nb == 0)
		return (rep);
	else if (nb < 0)
		return (0);
	else
		rep = nb * ft_recursive_factorial(nb - 1);
	return (rep);
}
