/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:48:48 by mzhukova          #+#    #+#             */
/*   Updated: 2023/11/09 17:14:15 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	char	*start;
	int		len;

	len = 0;
	while (src[len])
		len++;
	str = malloc(sizeof(*str) * (len + 1));
	if (!str)
		return (NULL);
	start = str;
	while (*src != '\0')
	{
		*str = *src;
		str++;
		src++;
	}
	*str = '\0';
	return (start);
}

// #include <stdio.h>
// int main (void)
// {
// 	char* str;
// 	char *str_dup;

// 	str = "Hallöchen";
// 	str_dup = ft_strdup(str);
// 	printf("First string: %s \n", str);
// 	printf("Second string: %s \n", str_dup);
// 	return (0);
// }