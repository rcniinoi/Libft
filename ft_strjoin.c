/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 22:54:14 by rchiewli          #+#    #+#             */
/*   Updated: 2022/03/20 18:33:42 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	alen;
	char	*s3;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	alen = ft_strlen(s1) + ft_strlen(s2) +1;
	s3 = ft_calloc(alen, 1);
	if (!s3)
		return (NULL);
	while (*s1)
		s3[i++] = *s1++;
	while (*s2)
		s3[i++] = *s2++;
	s3[i] = '\0';
	return (s3);
}

/*int	main()
{
	char	s1[] = "lorem ipsum";
	char	s2[] = "dolor sit amet";

	printf("%s\n",ft_strjoin(s1, s2));
}*/
