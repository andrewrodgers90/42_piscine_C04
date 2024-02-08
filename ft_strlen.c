/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:45:25 by arodgers          #+#    #+#             */
/*   Updated: 2023/07/22 14:30:22 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char	arr[] = "";
	char	arr2[] = "";
	int	len;
	int	len_actual;

	len = ft_strlen(arr);
	len_actual = strlen(arr2);
	printf("Mine: %d\nActual: %d", len, len_actual);
	return (0);
} */
