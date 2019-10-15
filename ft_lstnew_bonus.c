/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstnew_bonus.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 15:03:08 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/10 16:54:28 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *entry;

	entry = (t_list *)malloc(sizeof(t_list));
	if (entry)
	{
		entry->content = content;
		entry->next = NULL;
	}
	return (entry);
}
