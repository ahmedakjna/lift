/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahafridi <ahafridi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 10:13:25 by ahafridi          #+#    #+#             */
/*   Updated: 2023/07/26 09:39:31 by ahafridi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int a)
{
	return ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'));
}
