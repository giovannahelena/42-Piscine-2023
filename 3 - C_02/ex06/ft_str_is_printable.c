/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghelena- <ghelena-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 00:46:32 by ghelena-          #+#    #+#             */
/*   Updated: 2023/03/20 19:35:00 by ghelena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	if (str[0] == '\0')
		return (1);
	while (*str)
	{
		if (*str > 31 && *str < 127)
			str++;
		else
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int main (void)
{
        char mystr[] = "Giovanna Helena, 1998";
        char mystr2[] = "Giovanna Helena, 1998\n";
        char mystr3[] = "";
        printf("%d", ft_str_is_printable(mystr));
		printf("%d", ft_str_is_printable(mystr2));
		printf("%d", ft_str_is_printable(mystr3));
}*/