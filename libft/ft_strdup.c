/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renrodri <renrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:54:18 by renrodri          #+#    #+#             */
/*   Updated: 2024/11/05 02:18:22 by renrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*new_arr;
	int			size;

	size = ft_strlen(s);
	new_arr = (char *) malloc((size + 1) * sizeof(char));
	if (!new_arr)
		return (NULL);
	ft_memcpy((void *) new_arr, s, size);
	new_arr[size] = '\0';
	return (new_arr);
}
