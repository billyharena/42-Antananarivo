/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarley <bmarley@student.42antananari      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:41:58 by bmarley           #+#    #+#             */
/*   Updated: 2023/11/04 11:22:30 by bmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_char(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_print_char(a, b, c);
				if (a != '7' || b != '8' || c != '9')
				{
					write (1, ", ", 2);
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
