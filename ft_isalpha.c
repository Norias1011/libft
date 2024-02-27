/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akinzeli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:07:33 by akinzeli          #+#    #+#             */
/*   Updated: 2024/02/23 12:02:24 by akinzeli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	int		result;

	result = 0;
	if (c >= 65 && c <= 90)
	{
		result = 1;
	}
	else if (c >= 97 && c <= 122)
	{
		result = 1;
	}
	return (result);
}
