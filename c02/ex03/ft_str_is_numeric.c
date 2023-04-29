/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 18:54:46 by agrimald          #+#    #+#             */
/*   Updated: 2023/02/26 16:25:57 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	dev;

	i = 0;
	if (str[0] == '\0')
	{
		dev = 1;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			dev = 1;
			i++;
		}
		else
		{
			dev = 0;
			break ;
		}
	}
	return (dev);
}
/*
int	main(void)
{
	char str [] = "aaddw";
	printf("%d",ft_str_is_numeric(str));
	return (0);
}*/
