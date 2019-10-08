/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 12:08:16 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/08 12:09:15 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    char *str;
    size_t sz;

    sz = ft_strlen(s1);
    str = (char *)malloc(sz + 1);
    if (str)
    {
        ft_strlcpy(str, s1, sz);
    }
    return (str);
}