/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeounpar <jeounpar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:37:31 by jeounpar          #+#    #+#             */
/*   Updated: 2021/11/07 21:37:32 by jeounpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_ok(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (0);
		i++;
	}
	return (1);
}

static int	get_length(char *s1, char *set)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s1[i] != '\0')
	{
		if (is_ok(s1[i], set))
			len++;
		i++;
	}
	return (len);
}

static	void	putin_str(char *s1, char *set, char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		if (is_ok(s1[i], set))
		{
			str[j] = s1[i];
			j++;
		}	
		i++;
	}
	str[j] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*s1_str;
	char	*set_str;

	s1_str = (char *)s1;
	set_str = (char *)set;
	str = (char *)malloc((get_length(s1_str, set_str) + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	putin_str(s1_str, set_str, str);
	return (str);
}
