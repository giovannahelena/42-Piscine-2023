/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghelena- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 20:27:26 by ghelena-          #+#    #+#             */
/*   Updated: 2023/03/23 20:28:35 by ghelena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
// #include <stdio.h>

// int main(void)
// {
//   char *countmystring;

//   countmystring = "Mousse de limão vegano";
//   printf("%d\n", ft_strlen(countmystring));
// }
