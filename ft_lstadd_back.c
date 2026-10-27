/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umgajera <umgajera@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 22:37:35 by umgajera          #+#    #+#             */
/*   Updated: 2026/10/26 22:52:34 by umgajera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*new_node;

	if (lst != NULL && new != NULL)
	{
		new_node = ft_lstlast(lst[0]);
		if (!new_node)
			*lst = new;
		else
			new_node->next = new;
	}
}
