/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:00:52 by agrimald          #+#    #+#             */
/*   Updated: 2023/02/26 16:26:40 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	dev;

	i = 0;
	if (str[i] == '\0')
	{
		dev = 1;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
//int main(void)
//{
//	char str [] = "";
//	printf("%d",ft_str_is_uppercase(str));
//	return (0);
//}
