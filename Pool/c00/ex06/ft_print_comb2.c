/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarley <bmarley@student.42antananari      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:33:19 by bmarley           #+#    #+#             */
/*   Updated: 2023/11/03 14:26:43 by bmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_char(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_print_loop(char a, char b, char c)
{
	char	d;

	while (c <= '9')
	{
		if (a == c)
		{
			d = b + 1;
		}
		else
		{
			d = '0';
		}
		while (d <= '9')
		{
			ft_print_char(a, b, c, d);
			if (a != '9' || b != '8' || c != '9' || d != '9')
			{
				write(1, ", ", 2);
			}
			d++;
		}
		c++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = a;
			ft_print_loop(a, b, c);
			b++;
		}
		a++;
	}
}
