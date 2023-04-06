/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghelena- <ghelena-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:55:14 by ghelena-          #+#    #+#             */
/*   Updated: 2023/03/11 23:53:59 by ghelena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	ft_calc(int n0, int n1);

void	ft_print_comb2(void)
{
	int	n00;
	int	n01;

	n00 = 0;
	while (n00 <= 98)
	{
		n01 = n00 +1;
		while (n01 <= 99)
		{
			ft_calc(n00, n01);
			if (n00 != 98 || n01 != 99)
				write(1, ", ", 2);
			n01++;
		}
		n00++;
	}
}

void	ft_calc(int n0, int n1)
{
	int	a;	
	int	b;	
	int	c;
	int	d;

	a = (n0 / 10) + '0';
	b = (n0 % 10) + '0';
	c = (n1 / 10) + '0';
	d = (n1 % 10) + '0';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
}

/*#include <stdio.h>
int main(void)
{
	ft_print_comb2();
	return 0;
}*/
