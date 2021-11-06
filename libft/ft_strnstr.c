/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeounpar <jeounpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:43:13 by jeounpar          #+#    #+#             */
/*   Updated: 2021/11/06 17:43:14 by jeounpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	tmp;

	if ((char *)little == NULL)
		return ((char *)big);
	i = 0;
	while (big[i] != '\0' && i < len)
	{
		tmp = 0;
		if (little[tmp] == big[i + tmp])
		{
			while (little[tmp] && big[i + tmp])
			{
				if (little[tmp] != big[i + tmp] || (i + tmp) >= len)
					break ;
				tmp++;
			}
			if (little[tmp] == '\0')
				return (&((char *)big)[i]);
		}
	}
	return (NULL);
}
