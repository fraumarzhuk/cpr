/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:40:24 by mzhukova          #+#    #+#             */
/*   Updated: 2023/11/07 18:53:22 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// void	ft_putchar(char c);
#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*arg;

	argc--;
	while (argc > 0)
	{
		arg = argv[argc];
		while (*arg != '\0')
		{
			write(1, arg, 1);
			arg++;
		}
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
