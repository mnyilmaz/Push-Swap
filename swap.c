/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervenuryilmaz <mervenuryilmaz@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 01:12:59 by mervenuryil       #+#    #+#             */
/*   Updated: 2023/08/16 15:14:46 by mervenuryil      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void sa(t_sort *sort) // swap top two numbers in A
{
	sort->temp = 0x0;
	
	if (sort->len_a >= 2)
	{
		sort->temp = sort->stack_a[0];
		sort->stack_a[0] = sort->stack_a[1];
		sort->stack_a[1] = sort->temp;
		write(1, "sa\n", 3);
	}
}

void sb(t_sort *sort) // swap top two numbers in B
{
	sort->temp = 0x0;
	
	if (sort->len_b >= 2)
	{
		sort->temp = sort->stack_b[0];
		sort->stack_b[0] = sort->stack_b[1];
		sort->stack_b[1] = sort->temp;
		write(1, "sb\n", 3);
	}
}

void ss(t_sort *sort) // run sa and sb at the same time
{
	return ;
}
