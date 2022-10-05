/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 10:42:40 by cmartino          #+#    #+#             */
/*   Updated: 2022/10/04 10:42:41 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>

static int	ft_sign(char c)
{
	if (c == '-')
		return (-1);
	return (1);
}

int	ft_atoi(const char *str)
{
	int		sign;
	int		nb;
	int		i;

	i = 0;
	sign = 1;
	nb = 0;
	if (str[0] == '-' || str[0] == '+')
	{
		sign = ft_sign(str[0]);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - 48);
		i++;
	}
	return (nb * sign);
}

/*#include <stdlib.h>


int	main(int argc, char **argv)
{
	int i = 1;
	while (i < argc)
	{
		printf("atoi --> %d \t\t~ %d <-- ft_atoi\n", atoi(argv[i]), ft_atoi(argv[i]));
		i++;
	}
}*/