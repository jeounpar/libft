/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeounpar <jeounpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 22:10:56 by jeounpar          #+#    #+#             */
/*   Updated: 2021/11/06 22:10:57 by jeounpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dest_str;
	unsigned char	*src_str;
	unsigned char	cc;

	dest_str = (unsigned char *)dest;
	src_str = (unsigned char *)src;
	cc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		dest_str[i] = src_str[i];
		if (src_str[i] == cc)
			return (&dest_str[i + 1]);
		i++;
	}
	return (NULL);
}
