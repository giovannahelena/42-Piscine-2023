/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghelena- <ghelena-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 20:54:00 by ghelena-          #+#    #+#             */
/*   Updated: 2023/03/20 19:33:57 by ghelena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if (str[0] == '\0')
		return (1);
	while (*str)
	{
		if ((*str > 64 && *str < 91) || (*str > 96 && *str < 123))
			str++;
		else
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int main (void)
{
	char mystr[] = "abecedario";
	char mystr2[] = "abcedari0";
	char mystr3[] = "";
	printf("%d", ft_str_is_alpha(mystr));
	printf("%d", ft_str_is_alpha(mystr2));
	printf("%d", ft_str_is_alpha(mystr3));
}*/
