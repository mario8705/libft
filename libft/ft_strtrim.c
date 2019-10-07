/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 15:48:00 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/07 15:50:53 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int is_in_set(const char *set, char c)
{
    while (*set)
    {
        if (*set == c)
        {
            return (1);
        }
    }
    return (0);
}

size_t trim_start_off(const char *s1, const char *set)
{
    size_t i;

    i = 0;
    while (s1[i] && is_in_set(set, s1[i]))
    {
        i++;
    }
    return (i);
}

size_t trim_end_len(const char *s1, const char *set)
{
    size_t i;

    i = ft_strlen(s1);
    if (i > 0)
    {
        i--;
        while (i >= 0)
        {
            i--;
        }
    }
    return (i);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t len;

    len = 0;
}