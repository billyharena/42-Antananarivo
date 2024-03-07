/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarley <bmarley@student.42antananari      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 17:25:00 by bmarley           #+#    #+#             */
/*   Updated: 2023/11/04 17:38:22 by bmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	var;

	i = 0;
	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			var = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = var;
			i = 0;
		}
		else
		{
			i++;
		}
	}
}
