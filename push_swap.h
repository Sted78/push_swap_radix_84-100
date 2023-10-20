/*/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:39:11 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/18 22:18:39 by svanmarc         ###   ########.fr       */
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
	int	index;
	int	binary;
	struct s_stack	*next;
}	t_stack;


//check args
int		no_error_in_args(int ac, char **av, int startindex);
int		nbr_only(int ac, char **av, int startindex);
int	tous_les_strs_entrent_dans_int(int ac, char **av, int startindex);
//int		not_sorted(int ac, char **av);
int		no_double(int ac, char **av, int startindex);

//tools
long long int	ft_atoll(const char *str);
int	count_nbrs(char *str, char sep);
int	convert_int_in_binary(int nbr);

//strs & co
int ft_tab_strs_size(char **str);
void ft_free_tab_strs(char **str);
void ft_print_strs(char **str);

//base_commands
//rotate
t_stack 	*rotate(t_stack *pile);
void		ra(t_stack **pilea);
void		rb(t_stack **pileb);
void		rr(t_stack **pilea, t_stack **pileb);
//reverse_rotate
t_stack		*reverse_rotate(t_stack *pile);
void		rra(t_stack **pilea);
void		rrb(t_stack **pileb);
void		rrr(t_stack **pilea, t_stack **pileb);
//swap
t_stack		*swap(t_stack *pile);
void		sa(t_stack **pilea);
void		sb(t_stack **pileb);
void		ss(t_stack **pilea, t_stack **pileb);
//push
t_stack		*push(t_stack **dest, t_stack *src);
void		pa(t_stack **pilea, t_stack **pileb);
void		pb(t_stack **pilea, t_stack **pileb);

//sort pile
int	stack_is_sorted(t_stack **stack);
int		stack_min(t_stack *pile);
int		stack_max(t_stack *pile);
void	sort_piles(t_stack **pilea, t_stack **pileb);
int		min_index(t_stack **pile);
	
//algo 2 3 4 5
void	sort_2(t_stack **pilea);
void	sort_3(t_stack **pilea);
void	sort_4(t_stack **pilea, t_stack **pileb);
void	sort_5(t_stack **pilea, t_stack **pileb);
//double mouv
void	sa_rra(t_stack **pilea);
void	ra_sa(t_stack **pilea);

// noob
void	set_index_pile(t_stack *pile);
void	set_binary_index(t_stack *pile);

//radix
int		binary_max_digits(t_stack *pile);
int		ieme_digit_of_an_int(int nbr, int i, int max);
void	radix_sort(t_stack *pilea, t_stack *pileb);



//enchained
//1
t_stack	*stack_new(int val);
t_stack	*stack_last(t_stack *stack);
int stack_size(t_stack *stack);
void	stack_add_front(t_stack **stack, t_stack *new);
void	stack_add_back(t_stack **stack, t_stack *new);
//2
t_stack	*create_stack_a(int ac, char **av, int startindex);
void	stack_print(t_stack *stack);//////sup//////
t_stack	*stack_elem_previous(t_stack *pile, t_stack *elem);
void	free_stack(t_stack *stack);
void	index_print(t_stack *stack);
void	binary_print(t_stack *stack);


#endif