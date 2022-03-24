/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 00:55:12 by rchiewli          #+#    #+#             */
/*   Updated: 2022/03/20 18:47:06 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*memlst;

	memlst = malloc(sizeof(t_list));
	if (!memlst)
		return (NULL);
	memlst->content = content;
	memlst->next = NULL;
	return (memlst);
}
