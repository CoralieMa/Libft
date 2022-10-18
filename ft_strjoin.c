/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:59:45 by cmartino          #+#    #+#             */
/*   Updated: 2022/10/10 11:59:48 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_n_str(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*s;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
	{
		s2_len = ft_strlen(s2);
		s = (char *) malloc((s2_len) * sizeof(char) + 1);
		ft_strlcpy(s, s2, s2_len);
	}
	if (!s2)
	{
		s1_len = ft_strlen(s1);
		s = (char *) malloc((s1_len) * sizeof(char) + 1);
		ft_strlcpy(s, s1, s1_len);
	}
	return (s);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*s;

	if (!s1 || !s2)
		return (ft_n_str(s1, s2));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s = (char *) malloc((s1_len + s2_len) * sizeof(char) + 1);
	if (!s)
		return (NULL);
	s[s1_len + s2_len] = '\0';
	ft_strlcpy(s, s1, s1_len + 1);
	ft_strlcpy(&s[s1_len], s2, s2_len + 1);
	return (s);
}
