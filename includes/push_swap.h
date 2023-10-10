/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:39:11 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/10 19:41:06 by svanmarc         ###   ########.fr       */
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
int		no_error_in_args(int ac, char **av, int startindex);
int		nbr_only(int ac, char **av, int startindex);
int		not_too_big(int ac, char **av, int startindex);
//int		not_sorted(int ac, char **av);
int		no_double(int ac, char **av, int startindex);

//tool
long long int	ft_atoll(const char *str);
int	count_nbrs(char *str, char sep);
//strs & co
int ft_tab_strs_size(char **str);
void ft_free_tab_strs(char **str);
void ft_print_strs(char **str);
//commands
t_stack 	*rotate(t_stack *pile);
t_stack		*reverse_rotate(t_stack *pile);
t_stack		*test_previous_fct(t_stack *pile);



//enchained
//1
t_stack	*stack_new(int val);
t_stack	*stack_last(t_stack *stack);
int stack_size(t_stack *stack);
void	stack_add_front(t_stack **stack, t_stack *new);
void	stack_add_back(t_stack **stack, t_stack *new);
//2
t_stack	*create_stack_a(int ac, char **av, int startindex);
void	stack_print(t_stack *stack);
int	stack_is_sorted(t_stack *stack);
t_stack	*stack_elem_previous(t_stack *pile, t_stack *elem);


#endif