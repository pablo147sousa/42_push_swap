/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:07:18 by pmoreira          #+#    #+#             */
/*   Updated: 2024/11/15 17:07:37 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst);

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (lst == 0)
		return (0);
	temp = lst;
	while (temp->next != 0)
		temp = temp->next;
	return (temp);
}
/*
int main(void)
{
	t_list	*lst;


	lst = 0;
	ft_lstadd_front(&lst, ft_lstnew((void *)3));
	ft_lstadd_front(&lst, ft_lstnew((void *)2));
	ft_lstadd_front(&lst, ft_lstnew((void *)1));
	printf("%d\n", (ft_lstlast(lst)->content == (void *)3));
	return (0);
}
*/