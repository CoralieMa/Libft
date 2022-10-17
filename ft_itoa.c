/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 09:23:26 by cmartino          #+#    #+#             */
/*   Updated: 2022/10/11 09:23:27 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ten_power(int pow)
{
	int	nb;

	nb = 1;
	while (pow > 0)
	{
		nb = nb * 10;
		pow--;
	}
	return (nb);
}

static int	ft_ten(int nb)
{
	int	cnt;

	if (nb < 0)
		nb = -nb;
	cnt = 0;
	while (nb >= 1)
	{
		nb = nb / 10;
		cnt++;
	}
	return (cnt);
}

static char	*ft_expt(int n)
{
	char	*tab;
	int		ten;
	int		i;

	if (n == 0)
	{
		tab = (char *) malloc(2 * sizeof(char));
		if (!tab)
			return (NULL);
		tab[0] = '0';
		tab[1] = '\0';
		return (tab);
	}
	tab = (char *) malloc(12 * sizeof(char));
	if (!tab)
		return (NULL);
	tab[0] = '-';
	tab[1] = '2';
	n = 147483648;
	i = 2;
	ten = 9;
	while (i < 11)
	{
		ten--;
		tab[i] = (n / ft_ten_power(ten)) + '0';
		n -= (tab[i] - '0') * ft_ten_power(ten);
		i++;
	}
	return (tab);
}

char	*ft_itoa(int n)
{
	int		ten;
	int		i;
	int		temp;
	char	*s;

	if (n == 0 || n == -2147483648)
		return (ft_expt(n));
	ten = ft_ten(n);
	if (n < 0)
		ten++;
	s = (char *) malloc(ten * sizeof(char) + 1);
	if (!s)
		return (NULL);
	s[ten] = '\0';
	i = 0;
	temp = ten;
	while (i < temp)
	{
		if (n < 0)
		{
			n = -n;
			s[i] = '-';
			ten--;
			i++;
		}
		ten--;
		s[i] = (n / ft_ten_power(ten)) + '0';
		n -= (s[i] - '0') * ft_ten_power(ten);
		i++;
	}
	return (s);
}

#include <stdio.h>
int main(void)
{
	printf("%s", ft_itoa(-2147483648LL));
}