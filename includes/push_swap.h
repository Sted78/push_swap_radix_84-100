/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:39:11 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/03 18:34:37 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>
# include <stdio.h> /////// FONCTION INTERRDDDDDDDDDDDDDDDDDDIIIIIIIIIIIIIIIIIIIIIIIIIIITTTTTTTTTTTTTTTTTTTTTTTTTTTTTEEEEEEEEEEEEEEEEEEEEEEEE

typedef struct s_stack
{
	int	val;
	struct s_stack	*next;	
}	t_stack;


//check args
int		no_error_in_args(int ac, char **av);
int		nbr_only(int ac, char **av);
int		not_too_big(int ac, char **av);
//int		not_sorted(int ac, char **av);
int		no_double(int ac, char **av);

//tool
long long int	ft_atoll(const char *str);

//liste chainees
t_stack	*stack_new(int val);
t_stack	*stack_last(t_stack *stack);
int stack_size(t_stack *stack);
void	stack_add_front(t_stack **stack, t_stack *new);
void	stack_add_back(t_stack **stack, t_stack *new);
t_stack	*create_stack_a(int ac, char **av);
void	stack_print(t_stack *stack);
int	stack_is_sorted(t_stack *stack);



#endif