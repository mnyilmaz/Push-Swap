/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervenuryilmaz <mervenuryilmaz@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 01:50:53 by mervenuryil       #+#    #+#             */
/*   Updated: 2023/08/16 15:14:10 by mervenuryil      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "push_swap.h"

void ra(t_sort *sort) // top number of A goes to the bottom
{
	sort->temp = 0x0;
	sort->temp = sort->stack_a[0];
	sort->stack_a[0] = sort->stack_a[1];
	sort->stack_a[sort->len_a - 1] = sort->temp;
	write(1, "ra\n", 3);
	
}

void rb(t_sort *sort) // top number of B goes to the bottom
{
	sort->temp = 0x0;
	sort->temp = sort->stack_a[0];
	sort->stack_a[0] = sort->stack_a[1];
	sort->stack_a[sort->len_a - 1] = sort->temp;
	write(1, "rb\n", 3);
}

void rr(t_sort *sort) // run ra and rb at the same time
{
	sort->temp = 0x0;
	sort->temp = sort->stack_a[0];
	sort->stack_a[0] = sort->stack_a[1];
	sort->stack_a[sort->len_a - 1] = sort->temp;
	write(1, "rb\n", 3);
}
