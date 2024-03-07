/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarley <bmarley@student.42antananari      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 08:44:40 by bmarley           #+#    #+#             */
/*   Updated: 2023/11/07 08:52:18 by bmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
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
		if (str[i] >= 'A' && str[i] <= 'Z')
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
