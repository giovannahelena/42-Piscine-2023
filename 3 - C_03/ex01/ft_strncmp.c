/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghelena- <ghelena-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:59:18 by ghelena-          #+#    #+#             */
/*   Updated: 2023/03/23 20:08:19 by ghelena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
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
// 	char str1[] = "helloa";
// 	char str2[] = "hellob";
// 	printf("Teste 1\nft_strncmp:%d\n", ft_strncmp(str1, str2, 5));
// 	int	teste = strncmp(str1, str2, 3);
// 	printf("Função original: %d\n\n", teste);
// 	char str3[] = "halloa";
// 	char str4[] = "hbllob";
// 	printf("Teste 2\nft_strncmp:%d\n", ft_strncmp(str3, str4, 5));
// 	int	teste2 = strncmp(str3, str4, 3);
// 	printf("Função original: %d\n\n", teste2);
// 	char str5[] = "hello";
// 	char str6[] = "world";
// 	printf("Teste 3\nft_strncmp:%d\n", ft_strncmp(str5, str6, 3));
// 	int	teste3 = strncmp(str5, str6, 3);
// 	printf("Função original: %d\n\n", teste3);
// 	char str7[] = "abcdef";
// 	char str8[] = "abc-def";
// 	printf("Teste 4\nft_strncmp:%d\n", ft_strncmp(str7, str8, 3));
// 	int	teste4 = strncmp(str7, str8, 3);
// 	printf("Função original: %d\n", teste4);
// }
