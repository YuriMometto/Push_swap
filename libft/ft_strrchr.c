/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymometto <ymometto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:05:25 by ymometto          #+#    #+#             */
/*   Updated: 2023/11/13 13:48:03 by ymometto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	index;

	index = 0;
	while (s[index] != '\0')
		index++;
	while (index >= 0)
	{
		if (s[index] == (const char)c)
			return ((char *)s + index);
		index--;
	}
	return (NULL);
}
