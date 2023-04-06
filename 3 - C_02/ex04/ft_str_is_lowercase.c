/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghelena- <ghelena-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 23:25:14 by ghelena-          #+#    #+#             */
/*   Updated: 2023/03/20 19:34:30 by ghelena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	if (str[0] == '\0')
		return (1);
	while (*str)
	{
		if (*str > 96 && *str < 123)
			str++;
		else
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int main (void)
{
	char mystr[] = "giovanna";
	char mystr2[] = "g10v4nn4";
	char mystr3[] = "giovanna helena";
	char mystr4[] = "";
	printf("%d", ft_str_is_lowercase(mystr));
	printf("%d", ft_str_is_lowercase(mystr2));
	printf("%d", ft_str_is_lowercase(mystr3));
	printf("%d", ft_str_is_lowercase(mystr4));
}*/
