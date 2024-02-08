/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:26:33 by arodgers          #+#    #+#             */
/*   Updated: 2023/09/12 15:31:23 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check_base(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		if (str[i] <= 32 || str[i] == 127)
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	num;
	int		base_len;

	num = nbr;
	if (check_base(base))
	{
		if (num < 0)
		{
			num = -num;
			ft_putchar('-');
		}
		base_len = 0;
		while (base[base_len])
			base_len++;
		if (num >= base_len)
		{
			ft_putnbr_base(num / base_len, base);
			ft_putchar(base[num % base_len]);
		}
		if (num < base_len)
			ft_putchar(base[num]);
	}
}

int	main(void)
{
	char	*base = "0123456789ABCDEF";
	int	nbr = 42;
	ft_putnbr_base(nbr, base);
	return (0);
}
