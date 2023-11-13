/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahafridi <ahafridi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:41:06 by ahafridi          #+#    #+#             */
/*   Updated: 2023/08/02 10:54:37 by ahafridi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		idx;

	idx = ft_strlen((char *)str) + 1;
	while (idx--)
	{
		if (*(str + idx) == (unsigned char)c)
			return ((char *)(str + idx));
	}
	return (0);
}
