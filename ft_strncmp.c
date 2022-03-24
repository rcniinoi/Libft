/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:30:40 by rchiewli          #+#    #+#             */
/*   Updated: 2022/03/02 15:02:21 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == '\0')
		return (0);
	while (s1[i] && s2[i] && (i < n -1) && (s1[i] == s2[i])
		&& s1[i] >= 0 && s2[i] <= 127)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int main(void)
{
	char *s1;
	char *s2;

	s1 = "test\200";
	s2 = "test\0";
	printf("%d\n", strncmp(s1, s2, 6));
	printf("%d\n", ft_strncmp(s1, s2, 6));
	return (0);
}
*/
