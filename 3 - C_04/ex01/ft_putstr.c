/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghelena- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 20:29:42 by ghelena-          #+#    #+#             */
/*   Updated: 2023/03/23 20:30:38 by ghelena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	write(1, str, len);
}
// #include <unistd.h>

// int main(void)
// {
//   char *mystring;

//   mystring = "Mousse de limão vegano";
//   ft_putstr(mystring);
//   write(1, "\n", 1);
// }
