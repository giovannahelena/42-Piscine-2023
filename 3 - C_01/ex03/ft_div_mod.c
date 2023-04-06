/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghelena- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 11:03:13 by ghelena-          #+#    #+#             */
/*   Updated: 2023/03/17 11:03:42 by ghelena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>

int main(void)
{
  int div;
  int mod;
  
  ft_div_mod(9, 4, &div, &mod);
  printf("Div: %d\nMod: %d", div, mod);
}*/
