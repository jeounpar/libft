/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeounpar <jeounpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 19:21:32 by jeounpar          #+#    #+#             */
/*   Updated: 2021/11/16 18:48:03 by jeounpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	my_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	char	*str;
	size_t	i;

	tmp = (char *)s;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL || start >= my_strlen(s))
		return (NULL);
	i = 0;
	while (i < len && tmp[i] != '\0')
	{
		str[i] = tmp[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
