/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renrodri <renrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:22:54 by renrodri          #+#    #+#             */
/*   Updated: 2024/11/05 02:18:09 by renrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;
	unsigned char	*str;
	size_t			i;

	i = 0;
	dst = (unsigned char *)dest;
	str = (unsigned char *)src;
	if (dst == str)
	{
		return (dest);
	}
	while (i < n)
	{
		dst[i] = str[i];
		i++;
	}
	return (dst);
}
