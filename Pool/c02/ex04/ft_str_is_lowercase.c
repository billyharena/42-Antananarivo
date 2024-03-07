/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarley <bmarley@student.42antananari      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 08:36:26 by bmarley           #+#    #+#             */
/*   Updated: 2023/11/07 08:43:27 by bmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
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
		if (str[i] >= 'a' && str[i] <= 'z')
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
