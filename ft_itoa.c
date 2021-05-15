/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jasong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 15:02:33 by jasong            #+#    #+#             */
/*   Updated: 2021/05/13 18:00:33 by jasong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	get_size(int n)
{
	int	cnt;

	cnt = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		cnt++;
	while (n)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

char		*ft_itoa(int n)
{
	int		size;
	char	*ret;

	size = get_size(n);
	if (!(ret = (char *)malloc(size + 1)))
		return (NULL);
	ret[size] = '\0';
	if (n == 0)
	{
		ret[0] = '0';
		return (ret);
	}
	if (n < 0)
		ret[0] = '-';
	while (size-- && n)
	{
		ret[size] = n > 0 ? '0' + n % 10 : '0' - n % 10;
		n /= 10;
	}
	return (ret);
}
