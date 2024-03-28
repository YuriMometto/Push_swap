/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymometto <ymometto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:33:20 by ymometto          #+#    #+#             */
/*   Updated: 2023/10/27 09:26:01 by ymometto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	character;
	size_t			index;

	index = 0;
	character = (unsigned char)c;
	str = (unsigned char *)s;
	while (index < n)
	{
		if (str[index] == character)
			return ((str + index));
		index++;
	}
	return (NULL);
}
