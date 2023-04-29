/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 19:32:07 by agrimald          #+#    #+#             */
/*   Updated: 2023/02/26 16:26:21 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
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
		if (str[i] >= 'a' && str[i] <= 'z')
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
int main(void)
{
	char	str [] = "AWde";
	printf("%d", ft_str_is_lowercase(str));
	return (0);
}*/
