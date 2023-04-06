/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghelena- <ghelena-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:04:42 by ghelena-          #+#    #+#             */
/*   Updated: 2023/03/17 18:16:06 by ghelena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	mod;
	int	div;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*#include <stdio.h>

int main(void)
{
	int	x;
	int	y;

	x = 9;
	y = 4;
	ft_ultimate_div_mod (&x, &y);
	printf ("Div: %d\nMod: %d\n", x, y);
	return (0);
}*/
