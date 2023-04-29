/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:43:44 by agrimald          #+#    #+#             */
/*   Updated: 2023/02/26 20:36:33 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_conver(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (*str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_conver(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
			{
				if (!(str[i - 1] >= 'A' && str[i -1] <= 'Z'))
				{
					if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
						str[i] -= 32;
				}
			}
		}
		i++;
	}
	return (str);
}
/*
int main (void)
{
	char	str[] = "salut, comEnt tu vas ? 42mots qu/arante-deux; cinQUAnte+et+un";
	printf("%s", ft_strcapitalize(str));
	return (0);
}*/
