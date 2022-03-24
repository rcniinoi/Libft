/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiewli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 17:27:59 by rchiewli          #+#    #+#             */
/*   Updated: 2022/03/17 23:42:36 by rchiewli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nn;

	nn = n;
	if (nn < 0)
	{
		nn = -nn;
		ft_putchar_fd('-', fd);
	}
	if (nn < 10)
	{
		ft_putchar_fd(nn + '0', fd);
	}
	else
	{
		ft_putnbr_fd(nn / 10, fd);
		ft_putchar_fd(nn % 10 + '0', fd);
	}
}
/*int main()
{
	ft_putnbr_fd(45673,2);
}*/
