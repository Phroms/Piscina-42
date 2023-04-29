/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 22:51:21 by agrimald          #+#    #+#             */
/*   Updated: 2023/03/01 21:04:40 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	j;
	int	k;
	int	i;

	i = 0;
	k = 0;
	j = 0;
	while ((str[i] >= 9 && str[i] <= 13 || (str[i] == ' ' )))
		i++;
	while (str[i] == ' ' || str[i] == '+')
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		j = (j * 10) + (str[i] - '0');
		i++;
	}
	if ((j % 2) == 0)
		return (k);
	return (-k);
}
/*int main(void)
{
	char *str = " ---+--+1234ab567";
	printf("%d\n", ft_atoi(str));
	char *str2 = " --+--+1234ab567";
	printf("%d", ft_atoi(str2));
	return (0);
}*/
