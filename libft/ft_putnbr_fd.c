/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renrodri <renrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:42:32 by renrodri          #+#    #+#             */
/*   Updated: 2025/02/13 14:03:27 by renrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	n_new;

	n_new = n;
	if (n_new < 0)
	{
		n_new *= -1;
		ft_putchar_fd('-', fd);
	}
	if (n_new > 9)
		ft_putnbr_fd(n_new / 10, fd);
	ft_putchar_fd(n_new % 10 + '0', fd);
}
