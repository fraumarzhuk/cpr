/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:01:21 by mzhukova          #+#    #+#             */
/*   Updated: 2023/11/06 21:28:41 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	counter;
	int	odd;

	counter = 0;
	odd = 1;
	while (nb > 0)
	{
		nb = nb - odd;
		odd += 2;
		counter++;
	}
	if (nb == 0)
	{
		return (counter);
	}
	else
	{
		return (0);
	}
}
