/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:36:40 by mzhukova          #+#    #+#             */
/*   Updated: 2023/11/09 23:14:26 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*int_array;
	int	i;

	if (min >= max)
		return (NULL);
	int_array = malloc(sizeof(int) * (max - min + 1));
	i = 0;
	while (min <= max)
	{
		int_array[i] = min;
		min++;
		i++;
	}
	return (int_array);
}
