/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:10:43 by cmartino          #+#    #+#             */
/*   Updated: 2022/10/07 13:10:44 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*# include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*ptr;

	ptr = (char *)b;
	while (len > 0)
	{
		len--;
		ptr[len] = c;
	}
	return (b);
}*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*a;
	size_t	i;

	i = 0;
	a = (void *) malloc(count * size);
	if (!a)
		return (NULL);
	a = ft_memset(a, 0, count * size);
	return (a);
}

/*int main(void)
{
	int a = 0;
	a++;
}*/