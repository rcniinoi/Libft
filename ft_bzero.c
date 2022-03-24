/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 22:58:54 by rchiewli          #+#    #+#             */
/*   Updated: 2022/02/24 13:40:34 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
		*str++ = '\0';
}

/*int main(void)
{
	char str[50];
	strcpy(str, "ghgfghgfghgfgh");
	puts(str);
	ft_bzero(str, 5);
	puts(str);
	bzero(str, 5);
	puts(str);
	return (0);
}*/
