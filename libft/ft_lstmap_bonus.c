/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap_bonus.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 15:24:44 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/10 13:46:16 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(void *))
{
	t_list *newlist;
	t_list *item;
	t_list *last;

	newlist = NULL;
	while (lst)
	{
		item = f(lst->content);
		if (newlist)
		{
			last->next = item;
		}
		else
		{
			newlist = item;
		}
		last = item;
		lst = lst->next;
	}
	return (newlist);
}
