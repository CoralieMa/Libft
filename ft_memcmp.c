/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:55:46 by cmartino          #+#    #+#             */
/*   Updated: 2022/10/06 10:55:47 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;
	size_t	i;

	ptr1 = (const unsigned char *)s1;
	ptr2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] > ptr2[i])
			return (1);
		if (ptr1[i] < ptr2[i])
			return (-1);
		i++;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>

int main(void)
{
	printf("%d -- %d", memcmp("t\200", "t\0", 2), ft_memcmp("t\200", "t\0", 2));
}*/