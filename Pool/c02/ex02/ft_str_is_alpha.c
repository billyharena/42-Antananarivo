/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarley <bmarley@student.42antananari      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 09:53:38 by bmarley           #+#    #+#             */
/*   Updated: 2023/11/05 12:21:21 by bmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
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
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
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
