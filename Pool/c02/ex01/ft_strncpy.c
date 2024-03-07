/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarley <bmarley@student.42antananari      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 09:20:13 by bmarley           #+#    #+#             */
/*   Updated: 2023/11/07 17:26:32 by bmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;
	int	j;

	i = 0;
	j = n;
	while ((i < j) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	while (i < j)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
