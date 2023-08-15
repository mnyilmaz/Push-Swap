/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervenuryilmaz <mervenuryilmaz@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 01:12:59 by mervenuryil       #+#    #+#             */
/*   Updated: 2023/06/30 11:50:09 by mervenuryil      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void sa(t_sort *sort) // swap top two numbers in A
{
	sort->temp = 0x0;
	
	if (sort->len_A >= 2)
	{
		sort->temp = sort->stack_A[0];
		sort->stack_A[0] = sort->stack_A[1];
		sort->stack_A[1] = sort->temp;
		write(1, "sa\n", 3);
	}
}

void sb(t_sort *sort) // swap top two numbers in B
{
	sort->temp = 0x0;
	
	if (sort->len_B >= 2)
	{
		sort->temp = sort->stack_B[0];
		sort->stack_B[0] = sort->stack_B[1];
		sort->stack_B[1] = sort->temp;
		write(1, "sb\n", 3);
	}
}

void ss(t_sort *sort) // run sa and sb at the same time
{
	return ;
}
