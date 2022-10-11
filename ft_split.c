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

/*void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ptr1;
	char	*ptr2;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	ptr1 = (char *)dst;
	ptr2 = (char *)src;
	while (i < n)
	{
		ptr1[i] = ptr2[i];
		i++;
	}
	return (dst);
}
*/

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
	return (cpt);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	cnt;
	char	**tab;

	if (!s)
		return (NULL);
	tab = (char **) malloc(ft_len_tab(s, c) * sizeof(char **) + 1);
	if (!tab)
		return (NULL);
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

/*#include <stdio.h>
int main(void)
{
	char **tab = ft_split("-Bonjour-Lola--et-Toto-", '6');
	char **tab1 = ft_split("", '-');

	printf("[%s][%s][%s][%s][%s]\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	printf("[%s]", tab1[0]);
}*/
