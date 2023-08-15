/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervenuryilmaz <mervenuryilmaz@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 01:37:56 by mervenuryil       #+#    #+#             */
/*   Updated: 2023/08/15 15:36:55 by mervenuryil      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdlib.h>


typedef struct s_sort
{
	int				*array;
	int				*stack_A;
	int				*stack_B;
	char			**splitted;
	int				temp;
	int				*temp_A;
	int				*temp_B;
	int				len_A;
	int				len_B;
	struct s_sort	*next;
	
} t_sort;

void		put_into_stack_A(char **arguments, t_sort *sort);
void 		char_to_int(char *arguments, t_sort *sort);
void 		is_A_sorted(int *stack_A, int len_A);
//void 		len_A(char *array, t_sort *sort);
//void 		len_B(char *array, t_sort *sort);
void		free_str(char **str);
int			ft_atoi(char *s);
size_t		ft_strlen(const char *s);
char		*ft_strdup(const char *s1);
char		*ft_substr(char const *s, unsigned int start, size_t len);
static int	counter(char const *s, char c);
char		**ft_split(char const *s, char c);
int			the_chosen_flag(t_sort *sort);
int			ft_isdigit(int c);
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