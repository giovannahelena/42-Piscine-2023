/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghelena- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:10:01 by ghelena-          #+#    #+#             */
/*   Updated: 2023/03/17 11:12:57 by ghelena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str++)
	{
		count++;
	}
	return (count);
}

/*#include <stdio.h>

int main(void) {
    char *str = "Olá, mundo! :)";
    int len = ft_strlen(str);
    printf("A string '%s' tem %d caracteres.\n", str, len);
    return 0;
}*/
