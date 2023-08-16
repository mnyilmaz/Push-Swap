/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervenuryilmaz <mervenuryilmaz@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 23:26:38 by mervenuryil       #+#    #+#             */
/*   Updated: 2023/08/16 15:31:46 by mervenuryil      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"
# include <stdio.h>

int main(int argc, char **argv)
{
	t_sort *sort;

	sort = malloc(sizeof(t_sort));
	if (argc < 2)
		ft_error("\033[1;41mAn error occured. Not enough arguments to sort.\n\033[1;0m");

	else if (argc >= 2)
	{
		int i;
		
		i = 0;
		is_stack(argv, argc);
		digit_control(argv);
		len_of_the_stack(argv, sort);
		put_into_stack_a(argv, sort);
		//printf("%d\n", sort->stack_a[0]);
		//printf("%d\n", sort->stack_a[1]);
		//printf("%d\n", sort->stack_a[2]);
		//printf("%d\n", sort->stack_a[3]);
		is_identical(sort);
		
		is_a_sorted(sort->stack_a, argc - 1);
		
	}
	
	else
		write(1, "\n", 1);
	return (0);
}