/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymometto <ymometto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:10:42 by ymometto          #+#    #+#             */
/*   Updated: 2023/10/27 09:53:12 by ymometto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*source;
	size_t	len_src;
	size_t	len_dst;
	size_t	index;

	source = (char *)src;
	len_src = ft_strlen(source);
	len_dst = ft_strlen(dst);
	index = 0;
	if (len_dst >= size)
		return (size + len_src);
	while (source[index] != '\0' && (len_dst + index + 1) < size)
	{
		dst[len_dst + index] = source[index];
		index++;
	}
	dst[len_dst + index] = '\0';
	return (len_dst + len_src);
}
