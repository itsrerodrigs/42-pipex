/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: renrodri <renrodri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 13:40:56 by renrodri          #+#    #+#             */
/*   Updated: 2025/02/13 14:04:19 by renrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	in_string(char c, char charset)
{
	if (charset == c)
		return (0);
	return (1);
}

int	ft_strlen_s(char const *str, char charset)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && in_string(str[i], charset))
		i++;
	return (i);
}

int	count_strings(char const *str, char charset)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && !in_string(str[i], charset))
			i++;
		if (str[i] != '\0')
			counter++;
		while (str[i] != '\0' && in_string(str[i], charset))
			i++;
	}
	return (counter);
}

char	*word_allocate(char const *str, char charset)
{
	int		len_word;
	char	*word;
	int		i;

	i = 0;
	len_word = ft_strlen_s(str, charset);
	word = (char *)malloc((len_word + 1) * sizeof(char));
	if (!word)
		return (NULL);
	word[len_word] = 0;
	while (str[i] != '\0' && in_string(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**list_str;
	int		number_str;
	int		g;

	g = 0;
	number_str = count_strings(s, c);
	list_str = (char **)malloc((number_str + 1) * sizeof(char *));
	if (!list_str)
		return (NULL);
	list_str[number_str] = 0;
	while (*s != '\0')
	{
		while (*s != '\0' && !in_string(*s, c))
			s++;
		if (*s != '\0')
		{
			list_str[g] = word_allocate(s, c);
			g++;
		}
		while (*s != '\0' && in_string(*s, c))
			s++;
	}
	return (list_str);
}
