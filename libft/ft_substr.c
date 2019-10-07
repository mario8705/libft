/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_substr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 15:42:06 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/07 15:44:01 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    unsigned int sz;
    unsigned int i;

    if (start >= len)
        return (NULL);
    sz = len - start + 1;
    str = (char *)malloc(sz);
    if (str)
    {
        while (i < sz)
        {
            str[i] = s[i + start];
            i++;
        }
    }
    return (str);
}