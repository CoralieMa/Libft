/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:34:13 by cmartino          #+#    #+#             */
/*   Updated: 2022/10/12 09:34:14 by cmartino         ###   ########.fr       */
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


void ft_test(unsigned int i, char* s)
{
	s[i] = 'A';
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		f(i, s);
		i++;
	}
}

/*#include <stdio.h>
int main (void)
{
	char *str =  "LoReM iPsUm";
	printf("%s\n", str);
	ft_striteri(str, ft_test);
	printf("%s\n", str);
}*/