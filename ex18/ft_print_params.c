/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:40:24 by mzhukova          #+#    #+#             */
/*   Updated: 2023/11/08 16:28:33 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	char	*arg;
	int		i;

	i = 1;
	while (i < argc)
	{
		arg = argv[i];
		while (*arg != '\0')
		{
			ft_putchar(*arg);
			arg++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
