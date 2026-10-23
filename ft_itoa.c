/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umgajera <umgajera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 13:22:44 by umgajera          #+#    #+#             */
/*   Updated: 2026/10/23 18:10:33 by umgajera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		cal_len(long n);
char	*ft_itoa(int n);

int	cal_len(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	i;
	int		len;

	i = n;
	len = cal_len(i);
	result = (char *)malloc ((len * sizeof(char)) + 1);
	if (!result)
		return (0);
	if (i == 0)
		result[0] = '0';
	while (i != 0)
	{
		if (i < 0)
		{
			result[0] = '-';
			i = -i;
		}
		while (i > 0)
		{
			result[--len] = '0' + (i % 10);
			i = i / 10;
		}
	}
	return (result);
}
