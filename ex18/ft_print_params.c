/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:40:24 by mzhukova          #+#    #+#             */
/*   Updated: 2023/11/07 19:04:25 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	char	*arg;

	argc--;
	while (argc > 0)
	{
		arg = argv[argc];
		while (*arg != '\0')
		{
			ft_putchar(*arg);
			arg++;
		}
		ft_putchar('\n');
		argc--;
	}
	return (0);
}
