/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_C.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervenuryilmaz <mervenuryilmaz@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 11:54:04 by mervenuryil       #+#    #+#             */
/*   Updated: 2023/08/16 15:04:07 by mervenuryil      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(char *s)
{
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	while (*s == 32 || (*s > 8 && *s < 14))
		s++;
	if (*s == 45 || *s == 43)
	{
		if (*s == 45)
			sign *= -1;
		s++;
	}
	if ((*s == 45 || *s == 43) && *(s + 1) != 0)
		s++;
	while (*s > 47 && *s < 58)
	{
		result = (*s - 48) + (result * 10);
		s++;
		if (result * sign > 2147483647)
			return (0);
		if (result * sign < -2147483648)
			return (0);
	}
	return (result * sign);
}

void	free_str(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}
