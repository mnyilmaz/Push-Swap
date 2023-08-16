/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_A.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervenuryilmaz <mervenuryilmaz@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 11:04:42 by mervenuryil       #+#    #+#             */
/*   Updated: 2023/08/16 07:39:54 by mervenuryil      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	put_into_stack_A(char **arguments, t_sort *sort)
{
	int	i;
	int	j;
	int	t;

	i = 1;
	t = 0;
	len_of_the_stack(arguments, sort);
	sort->stack_A = malloc(sizeof(int) * (sort->len_A + 1));
	sort->temp_A = malloc(sizeof(int) * (sort->len_A + 1));
	while(arguments[i])
	{
		j = 0;
		sort->splitted = ft_split(arguments[i], ' ');
		while(sort->splitted[j])
		{
			sort->stack_A[t++] = ft_atoi(sort->splitted[j]);
			j++;
		}
		free_str(sort->splitted);
		i++;
	}
}

void len_of_the_stack(char **arguments, t_sort *sort)
{
	int	i;
	int	j;

	i = 1;
	sort->len_A = 0x0;
	while (arguments[i])
	{
		j = 0;
		sort->splitted = ft_split(arguments[i], ' ');
		while (sort->splitted[j])
		{
			sort->len_A++;
			j++;
		}
		free_str(sort->splitted);
		i++;
	}
	sort->len_B = 0;
	sort->temp = sort->len_A;
}

void	digit_control(char **arguments)
{
	int	i;
	int	j;

	i = 1;
	while(arguments[i])
	{
		j = 0;
		while(arguments[i][j])
		{
			if (arguments[i][j] == '+' || arguments[i][j] == '-' || arguments[i][j] == ' ')
			{
				j++;
				if ((arguments[i][j] > '9' || arguments[i][j] < '0') && arguments[i][j] != ' ')
					ft_error("\033[1;43mFailed argument has given to the program.\033[1;0m\n");	
			}
			if ((arguments[i][j] > '9' || arguments[i][j] < '0') && arguments[i][j] != ' ')
				ft_error("\033[1;43mFailed argument has given to the program.\033[1;0m\n");	
			j++;
		}
		i++;
	}
}
