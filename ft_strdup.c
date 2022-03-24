/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 03:21:26 by rchiewli          #+#    #+#             */
/*   Updated: 2022/03/24 21:48:58 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string)
{
	char	*nstr;
	size_t	i;

	i = 0;
	nstr = malloc((sizeof(char)) * (ft_strlen(string) + 1));
	if (!nstr)
		return (NULL);
	ft_memcpy(nstr, string, ft_strlen(string));
	nstr[ft_strlen(string)] = '\0';
	return (nstr);
}
/*
int main()
{
	char source[] = "lorem ipsum dolor sit amet";

	char* target = strdup(source); 
	printf("%s\n", target);
	char * target2 = ft_strdup(source);
	printf("%s\n", target2);
	return 0;
}
*/
