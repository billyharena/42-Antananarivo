/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarley <bmarley@student.42antananari      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:04:26 by bmarley           #+#    #+#             */
/*   Updated: 2023/11/04 17:23:30 by bmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	val;

	i = 0;
	while (i < (size / 2))
	{
		val = tab[i];
		tab[i] = tab[(size - 1) - i];
		tab[(size - 1) - i] = val;
		i++;
	}
}
