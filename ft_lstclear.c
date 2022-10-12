/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartino <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:58:32 by cmartino          #+#    #+#             */
/*   Updated: 2022/10/12 15:58:35 by cmartino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*nxt;
	
	temp = *lst;
	nxt = *lst;
	if (lst)
	{
		while (temp -> next)
		{
			lst = temp -> next;
			ft_lstdelone(lst, del);
			temp = temp -> next;
		}
	}
	nxt -> next = NULL;
}
