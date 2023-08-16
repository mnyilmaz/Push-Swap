/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervenuryilmaz <mervenuryilmaz@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 01:37:56 by mervenuryil       #+#    #+#             */
/*   Updated: 2023/08/16 15:20:23 by mervenuryil      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdlib.h>


typedef struct s_sort
{
	int				*array;
	int				*stack_a;
	int				*stack_b;
	int				*stack_id;
	char			**splitted;
	int				temp;
	int				temp_len;
	int				*temp_a;
	int				*temp_b;
	int				len_a;
	int				len_b;
	struct s_sort	*next;
	
} t_sort;

void		is_stack(char **arguments, int argc);
void		digit_control(char **arguments);
int			is_identical(t_sort *sort);
void 		len_of_the_stack(char **arguments, t_sort *sort);
void		put_into_stack_a(char **arguments, t_sort *sort);
void		is_a_sorted(int *stack_a, int len_a);
void		free_str(char **str);
int			ft_atoi(char *s);
size_t		ft_strlen(const char *s);
char		*ft_strdup(const char *s1);
char		*ft_substr(char const *s, unsigned int start, size_t len);
static int	counter(char const *s, char c);
char		**ft_split(char const *s, char c);

void		ft_error(char *error_msg);
void 		sa(t_sort *sort);
void 		sb(t_sort *sort);
void 		ss(t_sort *sort);
void 		ra(t_sort *sort);
void 		rb(t_sort *sort);
void 		rr(t_sort *sort);
void 		pa(t_sort *sort);
void 		pb(t_sort *sort);
void 		rra(t_sort *sort);
void 		rrb(t_sort *sort);
void 		rrr(t_sort *sort);  
void		sort_of_3(t_sort *sort);
void		sort_of_5(t_sort *sort);