/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umgajera <umgajera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 13:29:23 by umgajera          #+#    #+#             */
/*   Updated: 2026/10/14 12:27:59 by umgajera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ch;

	i = 0;
	ch = s;
	while (i < n)
	{
		ch[i] = c;
		i++;
	}
	return (s);
}

/*int main ()
{
  char str[] = "almost every programmer should know memset!";
  ft_memset (str, 'k',6);
  printf("%s\n",str);
  memset(str, 'k', 6);
  printf("%s\n",str);
  return 0;
}*/