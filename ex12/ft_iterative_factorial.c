/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:59:25 by mzhukova          #+#    #+#             */
/*   Updated: 2023/11/06 20:20:34 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	if (nb == 0)
		return (1);
	else if (nb < 0 || !nb || nb > 12)
		return (0);
	else
	{

		i = 1;
		res = 1;
		while (i <= nb)
		{
			res = res * i;
			i++;
		}
	}
	return (res);
}

// int	main(void)
// {
// 	printf("%i\n", ft_iterative_factorial(13));
// 	printf("%i", INT_MAX);
// }
