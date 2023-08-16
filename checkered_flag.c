/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkered_flag.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervenuryilmaz <mervenuryilmaz@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 16:52:25 by mervenuryil       #+#    #+#             */
/*   Updated: 2023/08/16 15:59:15 by mervenuryil      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(char *error_msg)
{
	int	i;

	i = 0;
	if (!error_msg)
		return ;
	while (error_msg[i])
	{
		write(1, &error_msg[i], 1);
		i++;
	}
	exit(0);
}

void	is_stack(char **arguments, int argc)
{
	int	i;

	i = 0;
	argc--;
	while (i <= argc)
	{
		if (*arguments[i] == 0x0)
			ft_error("\033[1;43mInvalid argument, argv[i] is null.\033[1;0m\n");
		else
			++i;
	}
}

void	is_a_sorted(int *stack_a, int len_a)
{
	int	i;

	i = 0;
	while (i < len_a)
	{
		if (stack_a[i] < stack_a[i + 1])
			i++;
		else if (stack_a[i] >= stack_a[i + 1])
		{
			write(1, "not sorted at all\n", 19);
			return ;
		}
		i++;
	}
	write(1, "well sorted itself\n", 20);
}

int	is_identical(t_sort *sort)
{
	int	i;
	int	j;
	int	*temp;

	temp = malloc(sizeof (int) * sort->len_a);
	i = 0;
	while (i < sort->len_a)
	{
		temp[i] = sort->stack_a[i];
		i++;
	}
	i = 0;
	while (i < sort->len_a)
	{
		j = i + 1;
		while (j < sort->len_a)
		{
			if (sort->stack_a[i] == temp[j])
				ft_error("\033[1;43mThis stack includes same numbers.\033[1;0m\n");
			j++;
		}
		i++;
	}
	free(temp);
	return (1);
}
