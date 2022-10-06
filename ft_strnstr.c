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
}*/

static int	ft_verifstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	len_needle;

	i = 0;
	len_needle = ft_strlen(needle);
	while (i < len && i < len_needle)
	{
		if (haystack[i] != needle[i] || i == len - 1)
			return (1);
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
			if (ft_verifstr(&haystack[i], needle, len - i) == 0)
				return (&temp[i]);
		}
		i++;
	}
	return (NULL);
}

/*int main(void)
{
	char *s  = "lorem ipsum dolor sit amet";
	printf("%s -- %s", ft_strnstr(s, NULL, 0), ft_strnstr(s, s, 59));
}*/