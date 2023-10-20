/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svanmarc <@student.42perpignan.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:40:46 by svanmarc          #+#    #+#             */
/*   Updated: 2023/10/20 14:18:01 by svanmarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"



int	main(int ac, char **av)
{
	int	new_ac;
	char	**new_av;
	int	startindex;
	t_stack	*pilea;
	t_stack *pileb;

	int tmpppp = 0;

	printf("\n\n\n ================= argvvvvsssss = ");
	while (tmpppp < ac )
	{
		printf("%s ,", av[tmpppp++]);
	}
	printf("        =====================\n\n\n");
	

	pilea = NULL;	
	pileb = NULL;		
	if (ac == 1)
	{
		write (1, "\n", 1);
		return (0);
	}
	new_ac = ac;
	new_av = av;
	if (ac == 2)
	{		
		new_ac = count_nbrs(av[1], ' ');
		new_av = ft_split(av[1], ' ');
		startindex = 0;
	}
	else
		startindex = 1;
	if (!no_error_in_args(new_ac, new_av, startindex))
	{
		printf("EXIT_FAILURE\n");
		if (ac == 2)
			ft_free_tab_strs(new_av);
		printf("EXIT_FAILURE 22222222222222\n");
		return (EXIT_FAILURE);
	}
	pilea = create_stack_a(new_ac, new_av, startindex);

	set_index_pile(pilea);

	set_binary_index(pilea);

	sort_piles(&pilea, &pileb); ///////////////////////////////////////// LEAAAAAAAAAAAAKS

	stack_print(pilea);

	printf("============= free_stack(pilea) : \n");
	free_stack(pilea);

	
	printf("============= free_stack(pileb) ???????????????????: \n");

	if (pileb)
	{
		printf("============= free_stack(pileb) : \n");
		free_stack(pileb);
	}	
	if (ac == 2)
			ft_free_tab_strs(new_av);
	
	
	return (0);
}
/*






clear
make

echo "."
echo "."
echo "😀😀😀😀😀😀😀😀😀😀😀😀v SHOULB BE ERROR and no leaks😀😀😀😀😀😀😀😀😀😀😀😀"
echo "."
echo "."

valgrind  ./push_swap 2 1 2
valgrind  ./push_swap 2 1 2sdfsdfsdf
valgrind  ./push_swap "AA 5"
valgrind  ./push_swap aa 25
valgrind  ./push_swap -7777777777777777777777777777777777777 2
valgrind  ./push_swap 2 2222222222222222222222222222222222222222


echo "."
echo "."
echo "😀😀😀😀😀😀😀😀😀😀😀😀v SHOULB BE OK  and no leaks😀😀😀😀😀😀😀😀😀😀😀😀"
echo "."
echo "."

valgrind  ./push_swap -5 -654 -987
valgrind  ./push_swap 25 -25
valgrind  ./push_swap 9 5 8 4 3
valgrind  ./push_swap 5 4
valgrind  ./push_swap 5 4 65
valgrind  ./push_swap 
valgrind  --track-origins=yes  --leak-check=full  ./push_swap "9 5 7"
valgrind  --track-origins=yes  --leak-check=full  ./push_swap 5









echo "."
echo "."
echo "😀😀😀😀😀😀😀😀😀😀😀😀 PROBLEM 😀😀😀😀😀😀😀😀😀😀😀😀"
echo "😀😀😀😀😀😀😀😀😀😀😀😀 PROBLEM 😀😀😀😀😀😀😀😀😀😀😀😀"
echo "😀😀😀😀😀😀😀😀😀😀😀😀 PROBLEM 😀😀😀😀😀😀😀😀😀😀😀😀"
echo "😀😀😀😀😀😀😀😀😀😀😀😀 PROBLEM 😀😀😀😀😀😀😀😀😀😀😀😀"
echo "😀😀😀😀😀😀😀😀😀😀😀😀 PROBLEM 😀😀😀😀😀😀😀😀😀😀😀😀"
echo "😀😀😀😀😀😀😀😀😀😀😀😀 PROBLEM 😀😀😀😀😀😀😀😀😀😀😀😀"
echo "😀😀😀😀😀😀😀😀😀😀😀😀 PROBLEM (vient de sort)😀😀😀😀😀😀😀😀😀😀😀😀"


valgrind  --track-origins=yes  --leak-check=full  ./push_swap 1 2 3
valgrind  --track-origins=yes  --leak-check=full  ./push_swap 5 4 65 41 
valgrind  --track-origins=yes  --leak-check=full  ./push_swap 5 4 65 41 5454
valgrind  --track-origins=yes  --leak-check=full  ./push_swap 5 4 65 41 5454 -454 -4244
valgrind  --track-origins=yes  --leak-check=full  ./push_swap 4 5
valgrind  --track-origins=yes  --leak-check=full  ./push_swap 1 2 3 4 5 6





echo "."
echo "."
echo "😀😀😀😀😀😀😀😀😀😀😀😀 CHECKER 😀😀😀😀😀😀😀😀😀😀😀😀"
echo "."
echo "."

arg="1 2 3 "; xxxxxxxxxxxxxxxxxxx | xxxxxxxxxxxxxxxxxxxx

*/
	
