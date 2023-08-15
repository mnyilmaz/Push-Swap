/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_A.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervenuryilmaz <mervenuryilmaz@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 11:04:42 by mervenuryil       #+#    #+#             */
/*   Updated: 2023/08/15 15:44:24 by mervenuryil      ###   ########.fr       */
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
	sort->stack_A = malloc(sizeof(int) * 100000);
	sort->temp_A = malloc(sizeof(int) * 100000);
	while(arguments[i])
	{
		j = 0;
		sort->splitted = ft_split(arguments[i], ' ');
		while(sort->splitted[j])
		{
			sort->stack_A[t++] = ft_atoi(sort->splitted[j]);
			if(ft_isdigit(ft_atoi(sort->splitted[j])))
				j++;
			else
				ft_error("\033[1;43mFailed argument has given to the program.\033[1;0m\n");
		}
		free_str(sort->splitted);
		i++;
	}
	if (!arguments[i])
		ft_error("\033[1;43mInvalid argument, argv[i] is null.\033[1;0m\n");
}

void len_of_the_stack(int argc, t_sort *sort)
{
	argc -= 1;
	sort->len_A = 0x0;
	sort->len_B = 0x0;
	while (argc)
	{
		sort->len_A++;
		argc--;
	}
}
