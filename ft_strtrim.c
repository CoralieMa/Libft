/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:32:40 by cmartino          #+#    #+#             */
/*   Updated: 2022/10/10 15:32:42 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (0);
		i++;
	}
	return (1);
}

static char	*ft_empty(void)
{
	char	*s;

	s = (char *) malloc(sizeof(s));
	s[0] = '\0';
	return (s);
}

static char	*ft_fill(char *s, char const *s1, size_t i, size_t j)
{
	size_t	cpt;

	s[j + 1] = '\0';
	cpt = 0;
	while (cpt <= j)
	{
		s[cpt] = s1[i];
		cpt++;
		i++;
	}
	return (s);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*s;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (!s1)
		return (NULL);
	while (ft_is_in_set(s1[i], set) == 0)
		i++;
	if (i - 1 == j)
		return (ft_empty());
	while (ft_is_in_set(s1[j], set) == 0)
		j--;
	j = j - i;
	s = (char *) malloc((j) * sizeof(char) + 2);
	if (!s)
		return (NULL);
	ft_fill(s, s1, i, j);
	return (s);
}
