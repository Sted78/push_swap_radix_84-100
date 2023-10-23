/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 16:41:48 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/21 16:48:25 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

long long int	ft_atoll(const char *str)
{
	long long int		result;
	long long int		i;
	int					sign;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	result = result * sign;
	return (result);
}

int	no_double(int ac, char **av, int startindex)
{
	int	i;
	int	j;

	i = startindex;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_atoll(av[i]) == ft_atoll(av[j]))
			{
				ft_putstr("Error\n");
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	str_entre_dans_un_int(char *str)
{
	long long int	num;

	num = ft_atoll(str);
	if (num < INT_MIN || num > INT_MAX)
	{
		ft_putstr("Error\n");
		return (0);
	}
	return (1);
}

int	tous_les_strs_entrent_dans_int(int ac, char **av, int startindex)
{
	int	i;

	i = startindex;
	while (i < ac)
	{
		if (!str_entre_dans_un_int(av[i]))
			return (0);
		i++;
	}
	return (1);
}
