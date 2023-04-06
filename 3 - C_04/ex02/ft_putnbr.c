/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghelena- <ghelena-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 20:45:24 by ghelena-          #+#    #+#             */
/*   Updated: 2023/03/23 21:50:59 by ghelena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_negative(int nb)
{
	char	num;

	write(1, "-", 1);
	if (nb == -2147483648)
	{
		write(1, "2147483648", 10);
	}
	else if (nb < 0 && nb >= -9)
	{
		ft_putnbr(nb * -1);
	}
	else
	{
		ft_putnbr((nb * -1) / 10);
		num = -(nb % 10) + 48;
		write(1, &num, 1);
	}
}

void	ft_putnbr(int nb)
{
	char	num;

	if (nb == 0)
		write(1, "0", 1);
	if (nb < 0)
	{
		ft_negative(nb);
	}
	else if (nb > 0 && nb <= 9)
	{
		num = nb + 48;
		write(1, &num, 1);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		num = (nb % 10) + 48;
		write(1, &num, 1);
	}
}

// int main(void)
// {
//   ft_putnbr(2147483647);
//   write(1, "\n", 1);
// }