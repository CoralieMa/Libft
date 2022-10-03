/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:23:32 by cmartino          #+#    #+#             */
/*   Updated: 2022/10/03 16:23:37 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcpy(char* dst, const char* src, size_t dstsize)
{
	size_t	len;

	len = 0;
	while (src[len])
	{
		dst[len] = src[len];
		len++;
	}
	dst[len] = '\0';
}
