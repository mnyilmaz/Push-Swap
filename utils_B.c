/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_B.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervenuryilmaz <mervenuryilmaz@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 11:30:05 by mervenuryil       #+#    #+#             */
/*   Updated: 2023/08/15 15:07:11 by mervenuryil      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *s)
{
	if (!*s)
		return (0);
	return (1 + ft_strlen(s + 1));
}

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*mlc;
	char	*ptr;

	len = ft_strlen(s1);
	mlc = (char *)malloc(len + 1);
	if (!mlc)
		return (NULL);
	ptr = mlc;
	while (*s1)
		*ptr++ = *s1++;
	*ptr = '\0';
	return (mlc);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*alc;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	alc = (char *)malloc(sizeof(char) * (len + 1));
	if (!alc)
		return (NULL);
	while ((i < len) && (s[i + start] != 0))
	{
		alc[i] = s[i + start];
		i++;
	}
	alc[i] = 0;
	return (alc);
}

static int	counter(char const *s, char c)
{
	int	counter;

	counter = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			counter++;
			while (*s && *s != c)
				s++;
		}
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	len;
	size_t	cnt;
	char	**alc;

	i = 0;
	if (!s)
		return (0);
	cnt = counter(s, c);
	alc = (char **)malloc(sizeof(char *) * (cnt + 1));
	if (!alc)
		return (0);
	while (i < cnt)
	{
		while (*s == c)
			s++;
		len = 0;
		while (s[len] != c && s[len])
			len++;
		alc[i++] = ft_substr(s, 0, len);
		s = s + len;
	}
	alc[i] = 0;
	return (alc);
}
