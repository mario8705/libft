/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_listadd_back.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 15:13:14 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/09 15:14:42 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *last;

	if (*alst)
	{
		last = ft_lstlast(*alst);
		last->next = new;
	}
	else
	{
		*alst = new;
	}
}
