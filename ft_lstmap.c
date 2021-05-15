/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasong <jasong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 19:04:06 by jasong            #+#    #+#             */
/*   Updated: 2021/05/13 20:30:11 by jasong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_lst;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	if (f == 0)
		return (NULL);
	n_lst = 0;
	while (lst != NULL)
	{
		if (!(tmp = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&n_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&n_lst, tmp);
		lst = lst->next;
	}
	return (n_lst);
}
