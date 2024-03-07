/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarley <bmarley@student.42antananari      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 14:01:52 by bmarley           #+#    #+#             */
/*   Updated: 2024/02/29 10:49:04 by bmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*oc;

	oc = 0;
	while (*s != '\0')
	{
		if (*s == (char) c)
			oc = (char *)s;
		s++;
	}
	if (*s == (char) c)
		oc = (char *)s;
	return (oc);
}
