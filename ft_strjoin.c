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

/*size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	while (src[i] && (i < dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*s;

	if (!s1 && !s2)
		return (NULL);
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

/*#include <stdio.h>
int main(int argc, char **argv)
{
	(void) argc;
	printf("%s", ft_strjoin(argv[1], NULL));
}*/