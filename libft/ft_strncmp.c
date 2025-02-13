/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renrodri <renrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:15:21 by renrodri          #+#    #+#             */
/*   Updated: 2024/11/05 02:18:39 by renrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	i = 0;
	ptr_s1 = (unsigned char *) s1;
	ptr_s2 = (unsigned char *) s2;
	while (i < n && ptr_s1[i] != '\0'
		&& ptr_s2[i] != '\0' && ptr_s1[i] == ptr_s2[i])
		i++;
	if (n != i)
		return (ptr_s1[i] - ptr_s2[i]);
	return (0);
}
