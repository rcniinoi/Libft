/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:46:57 by rchiewli          #+#    #+#             */
/*   Updated: 2022/03/17 21:46:50 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	dstl;
	size_t	srcl;
	size_t	i;

	i = 0;
	dstl = ft_strlen(dst);
	srcl = ft_strlen(src);
	if (siz < dstl)
		return (srcl + siz);
	if (siz >= 0)
	{
		while ((dstl + i) < (siz - 1) && src[i] && (siz != 0))
		{
			dst[dstl + i] = src[i];
			++i;
		}
		dst[dstl + i] = '\0';
	}
	return (dstl + srcl);
}
/*int main()
{
    char first[] = "rrrrrrrrrrrrrrr";
    char last[] = "lorem ipsum dolor sit amet";
    int r;
    int r2;
    int size = 5;
    char buffer[size];
    char buffer2[size];

    strcpy(buffer,first);
    r = ft_strlcat(first,last,size);

    puts(buffer);
    printf("Value returned: %d\n",r);
   
    strcpy(buffer2,first);
    r2 = strlcat(first,last,size);

    puts(buffer2);
    printf("Value returned: %d\n",r);
    return(0);
}*/
