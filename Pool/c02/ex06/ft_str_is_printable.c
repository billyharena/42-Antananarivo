/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarley <bmarley@student.42antananari      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 08:56:17 by bmarley           #+#    #+#             */
/*   Updated: 2023/11/07 09:14:16 by bmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	rep;

	i = 0;
	rep = 1;
	if (str[i] == '\0')
	{
		rep = 1;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			i++;
		}
		else
		{
			rep = 0;
			return (0);
		}
	}
	return (rep);
}
