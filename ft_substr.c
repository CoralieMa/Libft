/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 11:59:36 by cmartino          #+#    #+#             */
/*   Updated: 2022/10/10 11:59:39 by cmartino         ###   ########.fr       */
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

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t    len_s;
    size_t    i;
    char    *final_s;

    i = 0;

    len_s = ft_strlen(s);
    if (start >= len_s)
      return(NULL);
    if (len > len_s - start)
        len = len_s - start;
    if (start >= len_s)
        return (NULL);
    final_s = (char *) malloc (len * sizeof(char) + 1);
    if (!final_s)
        return (NULL);

    i = ft_strlcpy(final_s, &s[start], len + 1);
    while (i < len + 1)
    {
        final_s[i] = '\0';
        i++;
    }
    return (final_s);
}

/*#include <stdio.h>
int main(void)
{
	printf("%s", ft_substr("i just want this part #############", 5, 20));
}*/