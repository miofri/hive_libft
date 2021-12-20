/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skesuma <skesuma@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 15:02:07 by skesuma           #+#    #+#             */
/*   Updated: 2021/12/15 15:16:35 by skesuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	unsigned int	i;

	if (!s1 || !s2)
		return (0);
	i = 0;
	if (ft_strlen(s1) != ft_strlen(s2))
		return (0);
	else
	{
		while (s1[i] && s2[i] && i < n)
		{
			if (s1[i] != s2[i])
				return (0);
			i++;
		}
		return (1);
	}
}

/*
** ** Lexicographical comparison between s1 and s2. If the 2
** strings are identical the function returns 1, or 0 otherwise
** Returns 1 or 0 according to if the 2 strings are identical or not.
*/
