/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:27:15 by cmartino          #+#    #+#             */
/*   Updated: 2022/10/06 10:27:16 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	temp;
	char			*ptr;
	size_t			i;

	temp = (unsigned char)c;
	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == temp)
		{
			return (&ptr[i]);
		}
		i++;
	}
	return (NULL);
}

/* gerer strchr


#include <stdio.h>
#include <string.h>

int main(void)
{
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};

	printf("%s -- %s", (char *)memchr(tab, -1, 7), (char *)ft_memchr(tab, -1, 7));
}*/