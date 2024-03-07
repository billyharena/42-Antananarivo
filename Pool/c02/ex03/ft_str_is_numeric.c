/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarley <bmarley@student.42antananari      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 08:17:03 by bmarley           #+#    #+#             */
/*   Updated: 2023/11/07 08:33:58 by bmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
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
		if (str[i] >= 48 && str[i] <= 57)
		{
			i++;
		}
		else
		{
			rep = 0;
			return (rep);
		}
	}
	return (rep);
}
