/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strs_and_co.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 19:35:13 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/10 19:39:51 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_tab_strs_size(char **str)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (str[i])
	{
		size++;
		i++;	
	}
	return (size);
}

void	ft_print_strs(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			write (1, &str[i][j], 1);

			j++;
		}
		write (1, "+", 1);
		i++;
	}
	write (1, "\n", 1);
}

void	ft_free_tab_strs(char **str)
{
	int	i;
	
	while (str[i])
	{
		free (str[i]);
		i++;
	}
}
