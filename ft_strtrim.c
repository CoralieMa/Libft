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

/*size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if ((!s1[i] || !s2[i]) && n != 0)
	{
		return ((unsigned char) s1[i] - (unsigned char) s2[i]);
	}
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_set;
	size_t	i;
	size_t	cpt;
	char	*s;

	i = 0;
	cpt = 0;
	len_set = ft_strlen(set);
	if (!s1)
		return (NULL);
	while (s1[i])
	{
		if (ft_strncmp(&s1[i], set, len_set) == 0)
		{
			i += len_set - 1;
			cpt++;
		}
		i++;
	}
	s = (char *) malloc ((ft_strlen(s1) - cpt * len_set) * sizeof(char) + 1);
	if (!s)
		return (NULL);
	i = 0;
	cpt = 0;
	while (s1[i])
	{
		if (ft_strncmp(&s1[i], set, len_set) == 0)
			i += len_set;
		else
		{
			s[cpt] = s1[i];
			cpt++;
		}
		i++;
	}
	s[cpt] = '\0';
	return (s);
}

/*#include <stdio.h>
int main(void)
{
	printf("%s", ft_strtrim("Hello lola lila", "lo"));
}*/