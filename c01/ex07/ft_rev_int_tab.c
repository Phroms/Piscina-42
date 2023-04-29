/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:24:40 by agrimald          #+#    #+#             */
/*   Updated: 2023/02/19 14:51:26 by agrimald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{	
	int	box;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		box = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = box;
		i++;
	}	
}
