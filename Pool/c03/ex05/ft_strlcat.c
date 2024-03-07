/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarley <bmarley@student.42antananari      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 08:07:27 by bmarley           #+#    #+#             */
/*   Updated: 2023/11/09 10:54:57 by bmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		j += 1;
		i++;
	}
	return (j);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_ln;
	unsigned int	total_ln;

	dest_ln = ft_strlen(dest);
	total_ln = dest_ln + ft_strlen(src);
	if (dest_ln < size)
	{
		i = 0;
		while (src[i] != '\0' && dest_ln + i < size -1)
		{
			dest[dest_ln + i] = src[i];
			i++;
		}
		dest[dest_ln + i] = '\0';
	}
	return (total_ln);
}
