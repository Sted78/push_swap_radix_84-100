/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_mouv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 09:43:54 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/19 09:45:43 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa_rra(t_stack *pilea)
{
	sa(&pilea);
	rra(&pilea);
}

void	ra_sa(t_stack *pilea)
{
	ra(&pilea);
	sa(&pilea);
}