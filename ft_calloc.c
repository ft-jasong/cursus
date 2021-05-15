/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasong <jasong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 14:34:33 by jasong            #+#    #+#             */
/*   Updated: 2021/05/13 18:26:45 by jasong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char *tmp;

	tmp = (unsigned char *)malloc(size * count);
	if (tmp == NULL)
	{
		free(tmp);
		return (NULL);
	}
	ft_bzero(tmp, size * count);
	return ((void *)tmp);
}
