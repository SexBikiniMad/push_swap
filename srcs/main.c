/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lorampon <lorampon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 17:13:53 by lorampon          #+#    #+#             */
/*   Updated: 2022/05/03 15:42:18 by lorampon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int main (int argc, char **argv)
{
	t_list	*stack1;
	t_list	*stack2;

	if (checkerror(argc, argv))
		return (0);
	stack1 = createstack(argc, argv);
	stack2 = NULL;
	reverse(&stack1);
	while (stack1->next)
	{
		ft_printf("%d \n", *(int *)stack1->content);
		stack1 = stack1->next;
	}
	ft_printf("%d \n", *(int *)stack1->content);
	return (0);
}

