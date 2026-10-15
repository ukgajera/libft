/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umgajera <umgajera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 11:32:05 by umgajera          #+#    #+#             */
/*   Updated: 2026/10/14 12:27:25 by umgajera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ch;

	i = 0;
	ch = s;
	while (i < n)
	{
		ch[i] = '\0';
		i++;
	}
}

// int main ()
// {
//   char str[] = "almost every programmer should know memset!";
//   ft_bzero (str,6);
//   printf("%s\n",str);
//   bzero(str, 6);
//   printf("%s\n",str);
//   return 0;
// }