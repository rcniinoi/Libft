/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 10:31:20 by rchiewli          #+#    #+#             */
/*   Updated: 2022/03/19 05:46:38 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	while (n--)
		*d++ = *s++;
	return (dest);
}

/*int main(void)
{
	char src[50] = "abcdefghijklmn";
	char dest[50];
	char *ret;

	ret = ft_memcpy(dest,src,  3);
	printf("%s\n", ret);
	ret = memcpy(dest,src,  3);
	printf("%s\n", ret);
	return (0);
}
*/
