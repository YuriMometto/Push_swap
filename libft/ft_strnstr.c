/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymometto <ymometto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 09:59:47 by ymometto          #+#    #+#             */
/*   Updated: 2023/11/13 11:22:51 by ymometto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		index;
	size_t		i_little;

	index = 0;
	if (little[index] == '\0')
		return ((char *)big);
	while (big[index] != '\0' && index < len)
	{
		i_little = 0;
		while (big[index + i_little] && little[i_little]
			&& (big[index + i_little] == little[i_little])
			&& (index + i_little) < len)
			i_little++;
		if (!little[i_little])
			return ((char *)(big + index));
		index++;
	}
	return (NULL);
}
