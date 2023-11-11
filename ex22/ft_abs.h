/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 14:02:39 by mzhukova          #+#    #+#             */
/*   Updated: 2023/11/11 14:27:51 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define ABS(Value)	return_val(int Value)

int	return_val(int Value)
{
	if (Value > 0)
		return (Value);
	return (Value * -1);
}
