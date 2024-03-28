/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymometto <ymometto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:40:40 by ymometto          #+#    #+#             */
/*   Updated: 2023/11/13 11:21:50 by ymometto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		srclen;
	int		index;

	srclen = ft_strlen(s);
	str = malloc((srclen + 1) * sizeof(char));
	if (!str)
		return (NULL);
	index = 0;
	while (s[index] != '\0')
	{
		str[index] = (char)s[index];
		index++;
	}
	str[index] = '\0';
	return (str);
}
