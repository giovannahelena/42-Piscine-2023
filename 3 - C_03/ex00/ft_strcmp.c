/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghelena- <ghelena-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 10:25:30 by ghelena-          #+#    #+#             */
/*   Updated: 2023/03/23 20:04:48 by ghelena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char str1[] = "Hello";
// 	char str2[] = "Hello";
// 	printf("Teste 1 - Hello|Hello\nft_strcmp: %d\n", ft_strcmp(str1, str2));
// 	int	teste = strcmp(str1, str2);
// 	printf("função original: %d\n\n", teste);
// 	char str3[] = "World";
// 	char str4[] = "Wrld";
// 	printf("Teste 2 - World|Wrld\nft_strcmp: %d\n", ft_strcmp(str3, str4));
// 	int	teste2 = strcmp(str3, str4);
// 	printf("função original: %d\n\n", teste2);
// 	char str5[] = "Olá";
// 	char str6[] = "Ola";
// 	printf("Teste 3 - Olá|Ola\nft_strcmp: %d\n", ft_strcmp(str5, str6));
// 	int	teste3 = strcmp(str5, str6);
// 	printf("função original: %d\n\n", teste3);
// }
