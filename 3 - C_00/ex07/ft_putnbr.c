/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghelena- <ghelena-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 22:40:57 by ghelena-          #+#    #+#             */
/*   Updated: 2023/03/14 12:45:50 by ghelena-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	char	num;

	if (nb >= 0 && nb <= 9)
	{
		num = nb + '0';
		write(1, &num, 1);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		num = (nb % 10 + '0');
		write(1, &num, 1);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr((nb * -1)/10);
		num = ((nb * -1)%10);
		write(1, &num, 1);
	}
}

/*int main (void)
{
    ft_putnbr(-2147);
    return (0);
}*/
