/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarley <bmarley@student.42antananari      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:16:32 by bmarley           #+#    #+#             */
/*   Updated: 2023/11/07 17:27:07 by bmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		j += 1;
		i++;
	}
	return (j);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	ret;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = size;
	ret = ft_strlen(src);
	while ((i < j) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (ret);
}
