/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymometto <ymometto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 14:40:52 by ymometto          #+#    #+#             */
/*   Updated: 2023/10/26 13:44:17 by ymometto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*source;
	char	*dst;
	int		counter;

	counter = (int)(n - 1);
	source = (char *)src;
	dst = (char *)dest;
	if (dst == 0 && source == 0)
		return (NULL);
	if (dst > source)
	{
		while (counter >= 0)
		{
			dst[counter] = source[counter];
			counter--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dst);
}
