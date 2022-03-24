/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 16:36:26 by rchiewli          #+#    #+#             */
/*   Updated: 2022/03/20 04:41:28 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	j = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	if (i >= j)
		return (ft_calloc(1, 1));
	while (ft_strrchr(set, s1[j]) && s1[i])
		j--;
	return (ft_substr(s1, i, ft_strlen(s1) - (i + ft_strlen(s1) - j - 1)));
}

/*int main()
{
	printf("%s\n",ft_strtrim("", 0));
}*/
