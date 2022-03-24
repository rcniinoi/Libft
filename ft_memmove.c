/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:12:26 by rchiewli          #+#    #+#             */
/*   Updated: 2022/03/19 05:47:51 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)str2;
	d = (unsigned char *)str1;
	if (!str1 && !str2)
		return (NULL);
	if (d < s)
		return (ft_memcpy(str1, str2, n));
	while (str1 >= str2 && n--)
		*(d + n) = *(s + n);
	return (str1);
}	
/*int main(void)
{
        char src[10] = "bcdefg";
        //char dest[] = "abcdefgh";
        char *dest;
        char *ret;
        char *reta;
        char *retb;
        
        dest = src +1;
        //printf("src: %s\n", src-1);
        ret = ft_memmove(dest,src,  5);
        printf("%s\n", ret);
        reta = memmove(dest,src,  5);
        printf("%s\n", reta);
}*/
