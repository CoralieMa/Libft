/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:32:18 by cmartino          #+#    #+#             */
/*   Updated: 2022/10/03 13:32:22 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr1;
	char	*ptr2;
	//char	*temp;
	size_t	i;

	i = 0;
	ptr1 = (char *)dst;
	ptr2 = (char *)src;
	while (i < len)
	{
		ptr1[i] = ptr2[i];
		i++;
	}
	return (dst);
}
