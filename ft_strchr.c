/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 09:18:08 by cmartino          #+#    #+#             */
/*   Updated: 2022/10/04 09:18:10 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;
	
	i = 0;
	if (c == '\0')
		return (s[ft_strlen(s)]);
	while (s[i])
	{
		if (s[i] == c)
			return (s[i]);
	}
	return (NULL);
}

#include <stdio.h>
int main(void)
{
	char *s = "Bonjour";
	char c = 'o';
	printf("|%s| -- |%s|\n", ft_strchr(s, c), ft_strchr(s, c));
}