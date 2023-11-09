/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:32:14 by mzhukova          #+#    #+#             */
/*   Updated: 2023/11/09 15:33:37 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **a, char **b)
{
	char	*tmpr;

	tmpr = *a;
	*a = *b;
	*b = tmpr;
}

void	bubble_sort(char **arr, int n)
{
	int	i;
	int	swapped;
	int	j;

	i = 0;
	swapped = 1;
	while (i < n - 1 && swapped)
	{
		j = 0;
		swapped = 0;
		while (j < n - 1)
		{
			if (ft_strcmp(arr[j], arr[j + 1]) > 0)
			{
				ft_swap(&arr[j], &arr[j + 1]);
				swapped = 1;
			}
			j++;
		}
		i++;
	}
}

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		ft_putchar(str[n]);
		n++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	bubble_sort(argv + 1, argc - 1);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
