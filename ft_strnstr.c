/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:26:22 by cmartino          #+#    #+#             */
/*   Updated: 2022/10/04 11:26:24 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <stdio.h>
#include <string.h>
size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

int	ft_strncmp1(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if ((!s1[i] || !s2[i]) && n != 0)
	{
		return ((unsigned char) s1[i] - (unsigned char) s2[i]);
	}
	while ((s1[i]) && i < n && i < ft_strlen(s2))
	{
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_haystack;
	size_t	i;
	char	*temp;

	if ((haystack == NULL || needle == NULL) && len == 0)
		return (NULL);
	temp = (char *)haystack;
	len_haystack = ft_strlen(haystack);
	if (ft_strlen(needle) == 0)
		return (temp);
	i = 0;
	if (len_haystack < len)
		len = len_haystack;
	while (i < len)
	{
		if (haystack[i] == needle[0])
		{
			if (ft_strncmp1(&haystack[i], needle, len - i) == 0)
				return (&temp[i]);
		}
		i++;
	}
	return (NULL);
}

int main(void)
{
	//char *s  = "lorem ipsum dolor sit amet";
	printf("%s -- %s", strnstr("lorem ipsum dolor sit amet", "dolor", 15), ft_strnstr("lorem ipsum dolor sit amet", "dolor", 14));
}*/

