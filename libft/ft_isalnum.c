/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeounpar <jeounpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:35:02 by jeounpar          #+#    #+#             */
/*   Updated: 2021/11/07 16:35:05 by jeounpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	unsigned char	tmp;

	tmp = (unsigned char)c;
	if (tmp >= 'A' && tmp <= 'Z' || tmp >= 'a' && tmp <= 'z'
		|| tmp >= '0' && tmp <= '0')
		return (1);
	return (0);
}
