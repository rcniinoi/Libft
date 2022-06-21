/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 01:26:59 by rchiewli          #+#    #+#             */
/*   Updated: 2022/06/18 01:29:44 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <ctype.h>
# include <fcntl.h>
# include <limits.h>

char	*get_next_line(int fd);
void	*ft_calloc(size_t count, size_t size);
int		ft_strlen(char *str, int mode);
char	*ft_getread(int fd, char **bigarray);
int		ft_chkread(int rd, char *str, int mode);
char	*ft_join(char *s1, char *s2, int mode, int freemode);
char	*ft_afternjoin(char *s1, char *s2);
void	*ft_freecondom1(char **bigarray, int fd);
void	*ft_freecondom2(int rd, char *ret);

#endif
