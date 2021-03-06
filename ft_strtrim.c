/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strtrim.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/07 15:48:00 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/23 16:23:02 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_strndup(const char *s, size_t n)
{
	char *dup;

	dup = (char *)malloc(n + 1);
	if (dup)
	{
		ft_strlcpy(dup, s, n + 1);
	}
	return (dup);
}

static int		trim_start(const char *s, const char *set)
{
	int i;

	i = 0;
	while (s[i] && ft_strchr(set, s[i]))
	{
		i++;
	}
	return (i);
}

static int		trim_end(const char *s, const char *set)
{
	int n;

	n = (int)ft_strlen(s);
	while (n > 0 && ft_strchr(set, s[n - 1]))
	{
		n--;
	}
	return (n);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	const char	*start;
	int			n;

	if (!s1 || !set)
		return (0);
	start = s1 + trim_start(s1, set);
	n = trim_end(start, set);
	return (ft_strndup(start, n));
}
