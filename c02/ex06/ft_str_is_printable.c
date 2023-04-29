/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:12:58 by agrimald          #+#    #+#             */
/*   Updated: 2023/02/26 16:26:53 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	dev;

	i = 0;
	if (str[i] == '\0')
	{
		dev = 1;
	}
	while (str [i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
//	char str[] = "";
//	printf("%d", ft_str_is_printable(str));
//	return (0);
//}
