/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervenuryilmaz <mervenuryilmaz@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 23:26:38 by mervenuryil       #+#    #+#             */
/*   Updated: 2023/08/16 12:42:56 by mervenuryil      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"
# include <stdio.h>

int main(int argc, char **argv)
{
	t_sort *sort;

	sort = malloc(sizeof(t_sort));
	if (argc < 2)
	{
		write(1, "An error occured. Not enough arguments to sort.\n", 49);
		exit(0);
	}
	
	if (argc >= 2)
	{
		int i;
		
		i = 0;
		is_stack(argv, argc);
		digit_control(argv);
		len_of_the_stack(argv, sort);
		put_into_stack_A(argv, sort);

		
		//is_A_sorted(sort->stack_A, argc - 1);
		printf("%d\n", sort->stack_A[0]);
		//printf("%d\n", sort->stack_A[1]);
		//printf("%d\n", sort->stack_A[2]);
		//printf("%d\n", sort->stack_A[3]);

		// int a = ft_isdigit(sort->stack_A[0]);
		// int b = ft_isdigit(sort->stack_A[1]);
		// int c = ft_isdigit(sort->stack_A[2]);
		// printf("%d\n", a);
		// printf("%d\n", b);
		// printf("%d\n", c);
	}
	else
		write(1, "\n", 1);
	return (0);
}