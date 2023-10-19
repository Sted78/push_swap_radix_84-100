/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:42:07 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/18 23:38:44 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*void	convert_in_binary(int nbr, int *binary)
{
	int	binary_num[32];
	int	i;
	int	j;

	i = 0;
	while (nbr > 0)
	{
		binary_num[i] = nbr % 2;
		nbr /= 2;
		i++;
	}
	j = 0;
	while (j < i)
	{
		binary[j] = binary_num[i - j - 1];
		j++;
	}
}

void	convert_index_in_binary(t_stack *pile)
{
	t_stack	*tmp;
	int		binary[32];

	tmp = pile;
	while (tmp)
	{
		convert_in_binary(tmp->index, binary);
		tmp = tmp->next;
	}
}

void	set_index_in_pile(t_stack *pile)
{
	int		i;
	t_stack	*tmp;
	t_stack	*min;
	t_stack	*current;
	
	i = 1;
	tmp = pile;
	while (tmp)
	{
		min = tmp;
		current = tmp->next;
		while (current)
		{
			if (current->val < min->val)
				min = current;
			current = current->next;
		}
		min->index = i;
		i++;
		tmp = tmp->next;
	}
}
	
	
void	set_index_and_binary_in_pile(t_stack *pile)
{
	 set_index_in_pile(pile);
    t_stack *tmp = pile;
    while (tmp != NULL)
    {
        int binary[32];
        convert_in_binary(tmp->index, binary);
        printf("Node %d: ", tmp->index);
        for (int i = 0; i < 32; i++)
        {
            printf("%d", binary[i]);
        }
        printf("\n");
        tmp = tmp->next;
    }
	//set_index_in_pile(pile);
	//convert_index_in_binary(pile);
}*/