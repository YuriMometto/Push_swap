/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymometto <ymometto@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 13:57:38 by ymometto          #+#    #+#             */
/*   Updated: 2023/11/03 10:46:30 by ymometto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_int_len(long int number)
{
	int	int_len;

	int_len = 1;
	if (number < 0)
	{
		number = number * -1;
		int_len++;
	}
	while (number > 9)
	{
		number = number / 10;
		int_len++;
	}
	return (int_len);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			int_len;
	int			signal;
	long int	nb;

	signal = 0;
	nb = (long int)n;
	int_len = ft_int_len(nb);
	str = malloc((int_len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		signal = 1;
		nb = nb * -1;
	}
	str[int_len--] = '\0';
	while (int_len >= 0)
	{
		str[int_len--] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (signal == 1)
		str[0] = '-';
	return (str);
}
