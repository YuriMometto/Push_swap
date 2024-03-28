/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymometto <ymometto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:03:24 by ymometto          #+#    #+#             */
/*   Updated: 2023/10/30 11:30:44 by ymometto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		len_s1;
	int		len_s2;
	int		index;

	index = -1;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	str = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s1[++index] != '\0')
		str[index] = s1[index];
	index = 0;
	while (s2[index] != '\0')
	{
		str[len_s1 + index] = s2[index];
		index++;
	}
	str[len_s1 + index] = '\0';
	return ((char *)str);
}
