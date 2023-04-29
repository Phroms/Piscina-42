/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 15:05:59 by agrimald          #+#    #+#             */
/*   Updated: 2023/02/26 18:32:21 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
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
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
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
	char	str [] ="AKDWOAK";
	printf("%d",ft_str_is_alpha(str));
	return (0);
}*/
