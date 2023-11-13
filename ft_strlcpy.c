/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahafridi <ahafridi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:39:43 by ahafridi          #+#    #+#             */
/*   Updated: 2023/07/26 10:39:56 by ahafridi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t		idx;
	size_t		count;

	idx = 0;
	count = 0;
	if (!dest || !src)
		return (0);
	while (src[count])
		count++;
	while (src[idx] && idx + 1 < size)
	{
		dest[idx] = src[idx];
		idx++;
	}
	if (size)
		dest[idx] = '\0';
	return (count);
}
