/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:14:30 by mzhukova          #+#    #+#             */
/*   Updated: 2023/11/11 18:54:46 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		str++;
	}
}

void	ft_perror(int argc)
{
	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
	}
	else if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
	}
}

int	main(int argc, char *argv[])
{
	int		fd;
	char	ch;
	ssize_t	bytes_read;

	ft_perror(argc);
	fd = open(argv[1], O_RDONLY);
	if (argc > 1 && (fd == -1))
	{
		ft_putstr("Cannot read file.\n");
		return (1);
	}
	bytes_read = read(fd, &ch, 1);
	while (bytes_read > 0)
	{
		ft_putchar(ch);
		bytes_read = read(fd, &ch, 1);
	}
	if (argc > 1 && (bytes_read == -1))
	{
		ft_putstr("Cannot read file.\n");
		close(fd);
		return (1);
	}
	close(fd);
	return (0);
}
