/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervenuryilmaz <mervenuryilmaz@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 01:51:18 by mervenuryil       #+#    #+#             */
/*   Updated: 2023/06/30 02:22:37 by mervenuryil      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# include "push_swap.h"

void rra(t_sort *sort) // bottom number of A goes to the top
{
	sort->temp = 0x0;
	sort->temp = sort->stack_A[0];
	sort->stack_A[0] = sort->stack_A[sort->len_A - 1];
	sort->stack_A[sort->len_A - 1] = sort->temp;
	write(1, "rra\n", 4);
}

void rrb(t_sort *sort) // bottom number of B goes to the top
{
	return ;
}

void rrr(t_sort *sort) // run rra and rrb at the same time
{
	return ;
}
