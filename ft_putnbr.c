/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:15:53 by arodgers          #+#    #+#             */
/*   Updated: 2023/07/22 14:26:10 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	num;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		num = nb + '0';
		write(1, &num, 1);
	}
}
/*
int	main(void)
{
	char	nl;

	nl = '\n';
	ft_putnbr(42);
	write(1, &nl, 1);
	ft_putnbr(-42);
	write(1, &nl, 1);
	ft_putnbr(-2147483648);
	return (0);
} */
