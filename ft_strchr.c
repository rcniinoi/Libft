/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 00:16:05 by rchiewli          #+#    #+#             */
/*   Updated: 2022/03/17 15:15:37 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((*s != (char)c) && (*s != '\0'))
	{
		s++;
	}
	if (*s == (char)c)
	{
		return ((char *)s);
	}
	if ((char)c == '\0')
	{
		return ((char *)s);
	}
	return (0);
}

/*int main()
{
	char str[] = "kluytani-plaiweeheaw";
	int ch = 'a' + 256;
	char *ret;
	char *oret;

	ret = ft_strchr(str, ch);
	printf("String after |%c| is - |%s|\n", ch, ret);
	oret = strchr(str, ch);                                
 	printf("String after |%c| is - |%s|\n", ch, oret);
	return (0);
}
*/
