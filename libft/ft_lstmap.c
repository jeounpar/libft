/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeounpar <jeounpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:12:03 by jeounpar          #+#    #+#             */
/*   Updated: 2021/11/08 21:12:04 by jeounpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*cur_node;

	if (lst == NULL || f == NULL)
		return (NULL);
	cur_node = ft_lstnew(f(lst->content));
	if (cur_node == NULL)
		return (NULL);
	lst = lst->next;
	while (lst != NULL)
	{
		new_node = ft_lstnew(f(lst->content));
		if (new_node == NULL)
		{
			ft_lstclear(&cur_node, del);
			return (NULL);
		}
		ft_lstadd_back(&cur_node, new_node);
		lst = lst->next;
	}
	return (cur_node);
}
