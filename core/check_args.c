/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 10:02:52 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/03 18:30:06 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	no_double(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_atoll(av[i]) == ft_atoll(av[j]))
			{
				ft_putstr("Error : double\n");
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	not_too_big(int ac, char **av)
{
	int	i;
	long long int	num;

	i = 1;
	num = ft_atoll(av[i]);
	while (i < ac)
	{
		if (num < INT_MIN || num > INT_MAX)
		{
			ft_putstr("Error : max_int or min_int\n");
			return (0);
		}
		i++;
	}
	return (1);
}

int	nbr_only(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		if (av[i][j] == '-')
			j++;
		while (av[i][j])
		{
			if (ft_isdigit(av[i][j]) == 0)
			{
				ft_putstr("Error : nbr_only\n");
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	no_error_in_args(int ac, char **av)
{
	if (nbr_only(ac, av) == 0)
		return (0);
	else if (not_too_big(ac, av) == 0)
		return (0);
	else if (no_double(ac, av) == 0)
		return (0);
	else
		return (1);
}