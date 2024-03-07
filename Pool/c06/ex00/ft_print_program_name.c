/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarley <bmarley@student.42antananari      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:08:01 by bmarley           #+#    #+#             */
/*   Updated: 2023/11/14 17:09:35 by bmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc >= 0)
	{
		while (argv[0][i] != '\0')
		{
			i++;
		}
		write(1, argv[0], i);
		write(1, "\n", 1);
	}
	return (0);
}
