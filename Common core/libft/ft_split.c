/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmarley <bmarley@student.42antananari      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 16:21:22 by bmarley           #+#    #+#             */
/*   Updated: 2024/03/03 15:32:53 by bmarley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_size(char const *s, char c)
{
	size_t	size;

	size = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			size++;
		while ((*s != c) && *s)
			s++;
	}
	return (size);
}

static	size_t	ft_tmot(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*(s + i) && *(s + i) != c)
		i++;
	return (i);
}

static	void	*ft_sallocation(char **tab, int pos, size_t taille)
{
	int	i;

	i = 0;
	tab[pos] = malloc(taille);
	if (!tab[pos])
	{
		while (i <= pos)
		{
			free(tab[i++]);
		}
		free(tab);
		return (NULL);
	}
	return (NULL);
}

static	char	**ft_complete(char const *s, char c, char **tab, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (s[j] && s[j] == c)
			j++;
		tab[i] = ft_substr(s, j, ft_tmot(&s[j], c));
		if (!*(tab + i))
		{
			ft_sallocation(tab, i, size);
		}
		while (s[j] && s[j] != c)
			j++;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char		**res;
	size_t		size;

	if (!s)
		return (NULL);
	size = ft_size(s, c);
	res = malloc((size + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	res = ft_complete(s, c, res, size);
	return (res);
}
