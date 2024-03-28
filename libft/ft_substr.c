/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymometto <ymometto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 11:37:10 by ymometto          #+#    #+#             */
/*   Updated: 2023/11/06 15:33:27 by ymometto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t			index;
	unsigned int	s_len;
	unsigned int	number;

	s_len = (unsigned int)ft_strlen(s);
	number = 0;
	index = 0;
	if (s_len < start)
		len = 0;
	if ((s_len - (start)) <= len)
		index = s_len - (start);
	else
		index = len;
	sub = malloc((index + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	while (s[start + number] && number < len)
	{
		sub[number] = (char)s[start + number];
		number++;
	}
	sub[number] = '\0';
	return (sub);
}
