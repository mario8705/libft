/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_calloc.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 15:21:21 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/09 13:22:36 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	allocsz;
	void	*allocblk;

	allocsz = count * size;
	allocblk = malloc(allocsz);
	if (allocblk)
	{
		ft_bzero(allocblk, allocsz);
	}
	return (allocblk);
}
