/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:25:04 by mzhukova          #+#    #+#             */
/*   Updated: 2023/11/06 20:47:16 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <limits.h>
int	ft_recursive_factorial(int nb)
{
	int	res;

	if (nb == 0 || nb == 1)
		return (1);
	else if (nb < 0 || !nb || nb > 12)
		return (0);
	else
		res = nb * ft_recursive_factorial(nb - 1);
	return (res);
}
// int	main(void)
// {
// 	printf("%i\n", ft_recursive_factorial(12));
// 	printf("%i", INT_MAX);
// }
