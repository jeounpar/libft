/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeounpar <jeounpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:35:09 by jeounpar          #+#    #+#             */
/*   Updated: 2021/11/07 16:35:10 by jeounpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	unsigned char	tmp;

	tmp = (unsigned char)c;
	if (tmp >= 'A' && tmp <= 'Z' || tmp >= 'a' && tmp <= 'z')
		return (1);
	return (0);
}
