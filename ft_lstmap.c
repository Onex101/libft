/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xrhoda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 06:34:26 by xrhoda            #+#    #+#             */
/*   Updated: 2018/05/28 06:34:32 by xrhoda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_list;
	t_list *tmp_node;

	new_list = f(ft_lstnew(lst->content, lst->size));
	if (!new_list)
		return (NULL);
	tmp_node = new_list;
	lst = lst->next;
	while (lst->next)
	{
		tmp_node = f(ft_lstnew(lst->content, lst->size));
		if (!tmp_node)
			return (NULL);
		lst = lst-next;
	}
	return (new_list);
}
