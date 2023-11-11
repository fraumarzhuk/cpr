/* ************************************************************************** */
/*	                                                                    */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:14:30 by mzhukova          #+#    #+#             */
/*   Updated: 2023/11/11 19:32:43 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	validate_count(int argc)
{
	if (argc == 2)
		return (1);
	else if (argc == 1)
	{
		write(1, "File name missing.\n", 19);
		return (0);
	}
	else if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
	return (0);
}

int	validate_file(char *file)
{
	int	fd;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Cannot read file.\n", 18);
		return (0);
	}
	return (1);
}

void	read_file(char *file)
{
	int		fd;
	char	buf[1];

	fd = open(file, O_RDONLY);
	while (read(fd, buf, 1))
		write(1, buf, 1);
	close(fd);
}

int	main(int argc, char **argv)
{
	if (validate_count(argc))
	{
		if (validate_file(argv[1]))
		{
			read_file(argv[1]);
		}
		else
			return (0);
	}
	return (0);
}

// #include <unistd.h>
// #include <fcntl.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// void	ft_putstr(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		ft_putchar(str[i]);
// 		str++;
// 	}
// }

// void	ft_perror(int argc)
// {
// 	if (argc == 1)
// 	{
// 		ft_putstr("File name missing.\n");
// 	}
// 	else if (argc > 2)
// 	{
// 		ft_putstr("Too many arguments.");
// 	}
// }

// int	main(int argc, char *argv[])
// {
// 	int		fd;
// 	char	ch;
// 	ssize_t	bytes_read;

// 	ft_perror(argc);
// 	fd = open(argv[1], O_RDONLY);
// 	if (argc > 1 && (fd == -1))
// 	{
// 		ft_putstr("Cannot read file.\n");
// 		return (1);
// 	}
// 	bytes_read = read(fd, &ch, 1);
// 	while (bytes_read > 0)
// 	{
// 		ft_putchar(ch);
// 		bytes_read = read(fd, &ch, 1);
// 	}
// 	if (argc > 1 && (bytes_read == -1))
// 	{
// 		ft_putstr("Cannot read file.\n");
// 		close(fd);
// 		return (1);
// 	}
// 	close(fd);
// 	return (0);
// }
