/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:40:24 by mzhukova          #+#    #+#             */
/*   Updated: 2023/11/07 17:23:00 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	while (argc > 0)
	{
		while (*argv[argc] != '\0')
		{
			ft_putchar(*argv[argc]);
		}
		ft_putchar('\n');
		argc--;
	}
}
