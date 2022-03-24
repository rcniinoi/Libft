/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:54:44 by rchiewli          #+#    #+#             */
/*   Updated: 2022/03/11 00:40:20 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*cc;

	cc = (unsigned char *)s;
	while (n--)
	{
		if (*cc++ == (unsigned char)c)
			return (cc - 1);
	}
	return (0);
}

/*int main()
{
        char str[] = {-1, 0, 1, 2, 3};
        char ch = 1;
        char *ret;
        char *oret;

        ret = ft_memchr(str, ch, 5);
        printf("String after |%c| is - |%s|\n", ch, ret);
        oret = memchr(str, ch, 5);
        printf("String after |%c| is - |%s|\n", ch, oret);
        return (0);
}*/
