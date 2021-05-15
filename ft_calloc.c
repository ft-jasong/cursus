/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasong <jasong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 14:34:33 by jasong            #+#    #+#             */
/*   Updated: 2021/05/15 22:41:18 by jasong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			len;

	len = size * count;
	tmp = (unsigned char *)malloc(len);
	if (tmp == NULL)
		return (NULL);
	if (!len)
		ft_bzero(tmp, 1);
	else
		ft_bzero(tmp, size * count);
	return ((void *)tmp);
}
