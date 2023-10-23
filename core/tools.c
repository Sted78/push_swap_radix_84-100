/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:13:03 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/21 16:42:23 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	count_nbrs(char *str, char sep)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == sep)
			i++;
		if (str[i])
		{
			count++;
			while (str[i] && str[i] != sep)
				i++;
		}
	}
	return (count);
}

int	convert_int_in_binary(int nbr)
{
	char	binary[33];
	int		i;
	int		start;
	int		end;
	char	tmp;

	i = 0;
	while (nbr > 0)
	{
		binary[i] = nbr % 2 + '0';
		nbr /= 2;
		i++;
	}
	binary[i] = '\0';
	start = 0;
	end = i - 1;
	while (start < end)
	{
		tmp = binary[start];
		binary[start] = binary[end];
		binary[end] = tmp;
		start++;
		end--;
	}
	return (ft_atoi(binary));
}
