/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymometto <ymometto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 09:31:18 by ymometto          #+#    #+#             */
/*   Updated: 2023/11/13 11:28:03 by ymometto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free_all(char **arr)
{
	int	index;

	index = 0;
	while (arr[index])
		free(arr[index++]);
	free(arr);
	return (NULL);
}

static int	ft_word_count(char *s, char c)
{
	int	words;
	int	index;

	index = 0;
	words = 0;
	while (s[index] != '\0')
	{
		if (s[index] != c && (index == 0 || s[index - 1] == c))
			words++;
		index++;
	}
	return (words);
}

static char	**ft_putword(char *s, char **arr, char c)
{
	int	nb;
	int	index;
	int	start;
	int	end;

	index = 0;
	start = 0;
	end = 0;
	nb = 0;
	while (s[index] != '\0' && nb <= (ft_word_count(s, c) - 1))
	{
		while (s[index] == c)
			index++;
		start = index;
		while (s[index] != c && s[index] != '\0')
			end = index++;
		arr[nb] = ft_substr(s, start, (end - start) + 1);
		if (!arr[nb])
			return (ft_free_all(arr));
		nb++;
	}
	arr[nb] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		counter;

	if (!s)
		return (NULL);
	counter = ft_word_count((char *)s, c);
	arr = (char **)malloc((counter + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	return (ft_putword((char *)s, arr, c));
}
