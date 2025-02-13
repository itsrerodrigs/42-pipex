/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renrodri <renrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:53:46 by renrodri          #+#    #+#             */
/*   Updated: 2024/11/05 02:18:31 by renrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	counter;

	counter = 0;
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	else
	{
		while (counter <= (size - 1) && src[counter] != '\0')
		{
			dst[counter] = src[counter];
			counter++;
		}
	}
	if (counter == size)
		counter--;
	dst[counter] = '\0';
	return (src_len);
}
