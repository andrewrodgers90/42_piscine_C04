/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:26:33 by arodgers          #+#    #+#             */
/*   Updated: 2023/07/22 14:24:37 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int	i;
	int	neg_counter;
	int	num;

	i = 0;
	neg_counter = 0;
	num = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while ((str[i] != '\0') && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			neg_counter++;
		i++;
	}
	while ((str[i] != '\0') && (str[i] >= '0' && str[i] <= '9'))
	{
		num *= 10;
		num += str[i] - '0';
		i++;
	}
	if (neg_counter % 2 == 1)
		num = num * (-1);
	return (num);
}
/*
int	main(void)
{
	char	arr[] = "   +-+--1234asb567";

	int mine;
       	mine = ft_atoi(arr);

	printf("Mine: %d", mine);
	return (0);
} */
