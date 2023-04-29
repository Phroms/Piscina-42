/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 15:56:17 by agrimald          #+#    #+#             */
/*   Updated: 2023/02/28 22:41:08 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				j;

	j = 0;
	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[j] != '\0' && s2[j] != '\0' && s1[j] == s2[j] && i < n -1)
	{
		j++;
		i++;
	}
	return (s1[j] - s2[j]);
}
/* int main(void)
{
	char s1 [] = "12345";
	char s2 [] = "12346";
	printf("%d", ft_strncmp(s1, s2, 11)); 
	printf("%d", strncmp(s1, s2, 11)); 
}*/
