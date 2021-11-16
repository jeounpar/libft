/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeounpar <jeounpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 13:32:10 by jeounpar          #+#    #+#             */
/*   Updated: 2021/11/16 16:58:42 by jeounpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	tmp;
	unsigned char	*str;

	if (c == NULL)
		return (s);
	i = 0;
	tmp = c;
	str = (unsigned char *)s;
	while (str[i] != '\0' && i < n)
	{
		if (str[i] == tmp)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
