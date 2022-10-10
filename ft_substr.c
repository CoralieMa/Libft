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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	char	*final_s;

	len_s = ft_strlen(&s[start]);
	if (len > len_s)
		len = len_s;
	final_s = (char *) malloc (len * sizeof(char) + 1);
	if (!final_s)
		return (NULL);
	final_s[len] = '\0';
	ft_strlcpy(final_s, s, len - start);
	return (final_s);
}
