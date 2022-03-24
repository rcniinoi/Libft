/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 18:12:02 by rchiewli          #+#    #+#             */
/*   Updated: 2022/02/26 16:50:18 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*s2)
		return ((char *)s1);
	while (s1[i] && i < n)
	{
		if (s1[i] == s2[0])
		{
			while (s2[j] && s1[i + j] == s2[j] && i + j < n)
			{
				if (s2[j +1] == '\0')
				{
					return ((char *)&s1[i]);
				}
				j++;
			}
		}
		i++;
	}
	return (0);
}

/*int     main()
{
        char *ret = strnstr("klghasdfjklghuyt", "asd", 6);
	printf ("%s\n",ret);
        char *retd = ft_strnstr("klghasdfjklghuyt", "asd", 6);
        printf("%s\n",retd);
}*/
