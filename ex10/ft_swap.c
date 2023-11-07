/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:51:16 by mzhukova          #+#    #+#             */
/*   Updated: 2023/11/07 18:30:40 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

// #include <stdio.h>
// int main(void)
// {
// 	int a = 1;
// 	int b = 2;
// 	ft_swap(&a, &b);
// 	printf("a int: %d\n", a);
// 	printf("b int: %d\n", b);
// 	return (0);
// }