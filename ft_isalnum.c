/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umgajera <umgajera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 13:54:35 by umgajera          #+#    #+#             */
/*   Updated: 2026/10/09 13:16:49 by umgajera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_isalnum(int arg)
{
	if (!((arg >= 'A' && arg <= 'Z') || (arg >= 'a' && arg <= 'z')
			|| (arg >= '0' && arg <= '9')))
	{
		return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d ", ft_isalnum('+'));
// }