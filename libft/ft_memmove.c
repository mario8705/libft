/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 14:14:42 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/08 11:54:57 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
    unsigned char *a;
    unsigned char *b;

    a = (unsigned char *)dst;
    b = (unsigned char *)src;
    if (a > b)
    {
        while (len--)
        {
            *a++ = *b++;
        }
    }
    else
    {
        /* TODO */
    }
    return (dst);
}
