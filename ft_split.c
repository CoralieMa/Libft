/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:32:30 by cmartino          #+#    #+#             */
/*   Updated: 2022/10/10 15:32:32 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_tab(char const *s, char c)
{
	size_t	i;
	size_t	cpt;

	i = 0;
	cpt = 1;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (i != 0 && s[i + 1] && s[i +1] != c)
				cpt++;
		}
		i++;
	}
	return (cpt + 1);
}

static char	**ft_fill_tab(char const *s, char c, char **tab)
{
	size_t	i;
	size_t	j;
	size_t	cnt;

	i = 0;
	j = 0;
	while (s[i])
	{
		cnt = 0;
		if (s[i] && s[i] != c)
		{
			while (s[i + 1] != c && s[i + 1])
			{
				cnt++;
				i++;
			}
			tab[j] = (char *) malloc(cnt * sizeof(char) + 2);
			tab[j][cnt + 1] = '\0';
			ft_memcpy(tab[j], &s[i - cnt], cnt + 1);
			j++;
		}
		i++;
	}
	tab[j] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = (char **) malloc(ft_len_tab(s, c) * sizeof(*tab));
	if (!tab)
		return (NULL);
	return (ft_fill_tab(s, c, tab));
}
