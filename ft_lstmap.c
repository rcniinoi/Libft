/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 03:17:46 by rchiewli          #+#    #+#             */
/*   Updated: 2022/03/18 04:01:11 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*flst;
	t_list	*start;

	start = NULL;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		flst = ft_lstnew((*f)(lst->content));
		if (!flst)
		{
			ft_lstclear(&start, (*del));
			return (0);
		}
		ft_lstadd_back(&start, flst);
		lst = lst->next;
	}
	return (start);
}
