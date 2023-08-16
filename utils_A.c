/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_A.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervenuryilmaz <mervenuryilmaz@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 11:04:42 by mervenuryil       #+#    #+#             */
/*   Updated: 2023/08/16 15:15:21 by mervenuryil      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	put_into_stack_a(char **arguments, t_sort *sort)
{
	int	i;
	int	j;
	int	t;

	i = 1;
	t = 0;
	len_of_the_stack(arguments, sort);
	sort->stack_a = malloc(sizeof(int) * (sort->len_a + 1));
	sort->temp_a = malloc(sizeof(int) * (sort->len_a + 1));
	while (arguments[i])
	{
		j = 0;
		sort->splitted = ft_split(arguments[i], ' ');
		while (sort->splitted[j])
		{
			sort->stack_a[t++] = ft_atoi(sort->splitted[j]);
			j++;
		}
		free_str(sort->splitted);
		i++;
	}
}

void	len_of_the_stack(char **arguments, t_sort *sort)
{
	int	i;
	int	j;

	i = 1;
	sort->len_a = 0x0;
	while (arguments[i])
	{
		j = 0;
		sort->splitted = ft_split(arguments[i], ' ');
		while (sort->splitted[j])
		{
			sort->len_a++;
			j++;
		}
		free_str(sort->splitted);
		i++;
	}
	sort->len_b = 0;
	sort->temp_len = sort->len_a;
}

void	digit_control(char **arguments)
{
	int	i;
	int	j;

	i = 1;
	while (arguments[i])
	{
		j = 0;
		while (arguments[i][j])
		{
			if (arguments[i][j] == '+' || arguments[i][j] == '-' \
				|| arguments[i][j] == ' ')
			{
				j++;
				if ((arguments[i][j] > '9' || arguments[i][j] < '0')
					&& arguments[i][j] != ' ')
					ft_error("\033[1;43mFailed argument has given to the program.\033[1;0m\n");
			}
			if ((arguments[i][j] > '9' || arguments[i][j] < '0')
				&& arguments[i][j] != ' ')
				ft_error("\033[1;43mFailed argument has given to the program.\033[1;0m\n");
			j++;
		}
		i++;
	}
}
