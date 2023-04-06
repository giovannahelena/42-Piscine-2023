/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghelena- <ghelena-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 23:14:17 by ghelena-          #+#    #+#             */
/*   Updated: 2023/03/20 19:34:14 by ghelena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	if (str[0] == '\0')
		return (1);
	while (*str)
	{
		if (*str > 47 && *str < 58)
			str++;
		else
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int main (void)
{
	char mystr[] = "1998";
	char mystr2[] = "I998";
	char mystr3[] = "";
	printf("%d", ft_str_is_numeric(mystr));
	printf("%d", ft_str_is_numeric(mystr2));
	printf("%d", ft_str_is_numeric(mystr3));
}*/
