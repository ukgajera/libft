/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umgajera <umgajera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 13:22:44 by umgajera          #+#    #+#             */
/*   Updated: 2026/10/28 08:42:57 by umgajera         ###   ########.fr       */
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
	long	nb;
	int		len;

	nb = n;
	len = cal_len(nb);
	result = (char *)malloc ((len * sizeof(char)) + 1);
	if (result == NULL)
		return (NULL);
	if (nb == 0)
		result[0] = '0';
	result[len] = '\0';
	if (nb < 0)
	{
		result[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
		result[--len] = '0';
	while (nb > 0)
	{
		result[--len] = '0' + (nb % 10);
		nb = nb / 10;
	}
	return (result);
}
