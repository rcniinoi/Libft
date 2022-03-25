/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 19:27:35 by rchiewli          #+#    #+#             */
/*   Updated: 2022/03/26 00:24:01 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strcnt(char	const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			j++;
		i++;
	}
	if (s[0] && j == 0)
		j += 1;
	j += 1;
	return (j);
}

static void	ft_zero(char *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s);
	while (i < len)
	{
		if (s[i] == c)
			s[i] = '\0';
		i++;
	}
}

static char	**ft_while(char **area, char *st, int cnt)
{
	int	i;

	i = 0;
	if (cnt == 1)
	{
		area[0] = NULL;
		return (area);
	}
	while (cnt - 1 > i)
	{
		while (*st == '\0')
			st++;
		area[i] = ft_strdup(st);
		if (i == cnt - 2)
			break ;
		st += ft_strlen(area[i]);
		i++;
	}
	area[i + 1] = NULL;
	return (area);
}

static char	**ft_maltect(char *ns, char c)
{
	char	**area;

	if (*ns == '\0')
	{
		area = (char **)malloc(sizeof(char *));
		if (!area)
			return (NULL);
	}
	else
	{
		area = (char **)malloc(ft_strcnt(ns, c) * (sizeof(char *)));
		if (!area)
			return (NULL);
	}
	return (area);
}

char	**ft_split(char const *s, char c)
{
	char	*ns;
	char	**area;
	int		i;
	char	*st;
	int		cnt;

	i = 0;
	if (!s)
		return (NULL);
	ns = ft_strtrim(s, &c);
	area = ft_maltect(ns, c);
	st = ns;
	cnt = ft_strcnt(st, c);
	ft_zero(st, c);
	area = ft_while(area, st, cnt);
	free(ns);
	return (area);
}

/*int	main(void)
{
	char **test;
	char **test1;
	int	i;

	test = ft_split("      split       this for   me  !      ", ' ');
	test1 = ((char*[6]){"split", "this", "for", "me", "!", NULL});
	i = 0;
	while (test[i])
	{
		printf("%d:\n test: %sa\n test1: %sb\n", i, test[i], test1[i]);
		i++;
	}
	printf("%d:\n test: %sa\n test1: %sb\n", i, test[i], test1[i]);
}
int main()
{
	int	i;
	int	j;
	char	*str = "      split       this for   me  !       ";
	char	**area = ft_split(str, ' ');
	char    **expected = ((char*[6]){"split", "this", "for", "me", "!", NULL});
	i = 0;
	while (i < 7)
	{
		printf("ft - %d - %p\n", i, area[i]);
		printf("fn - %d - %p\n", i, expected[i]);
		i++;
	}
	printf("%d - %p\n", i, area[i]);
	printf("%d - %p\n", i, expected[i]);
	while (area[j])
	{
		free(area[j]);
		j++;
	}
	free(area);
	return (0);
}*/
