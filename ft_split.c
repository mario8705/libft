/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: alavaud <alavaud@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/08 13:03:35 by alavaud      #+#   ##    ##    #+#       */
/*   Updated: 2019/10/14 16:10:28 by alavaud     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

static int	extract_token(const char *source, char sep,
	char *output, int *length)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (source[i])
	{
		if (source[i] == sep)
		{
			i++;
			break ;
		}
		if (output)
		{
			output[i] = source[i];
			output[i + 1] = 0;
		}
		i++;
		len++;
	}
	if (length)
		*length = len;
	return (i);
}

static char	**extract_tokens(const char *s, char c,
	char **tokens, int *ntokens)
{
	int		ntok;
	int		toff;
	int		tlen;

	ntok = 0;
	tlen = 1;
	while (*s)
	{
		toff = extract_token(s, c, NULL, &tlen);
		if (tlen > 0)
		{
			if (tokens)
			{
				if (!(tokens[ntok] = (char *)malloc(tlen + 1)))
					return (NULL);
				extract_token(s, c, tokens[ntok], NULL);
			}
			ntok++;
		}
		s += toff;
	}
	if (ntokens)
		*ntokens = ntok;
	return (tokens);
}

char		**ft_split(char const *s, char c)
{
	char	**tokens;
	int		ntokens;
	int		i;

	extract_tokens(s, c, NULL, &ntokens);
	tokens = (char **)ft_calloc(ntokens + 1, sizeof(char **));
	if (tokens)
	{
		if (!extract_tokens(s, c, tokens, NULL))
		{
			i = 0;
			while (i < ntokens)
			{
				free(tokens[i]);
				i++;
			}
			free(tokens);
		}
	}
	return (tokens);
}
