/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swqp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaguire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 15:04:19 by jmaguire          #+#    #+#             */
/*   Updated: 2018/07/07 11:51:26 by jmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int a_swap;
	int b_swap;

	a_swap = *b;
	b_swap = *a;

	write(1, &a_swap, 1);
	write(1, &b_swap, 1);
}

int		main(void)
{
	int a;
	int b;

	a = 1;
	b = 2;
	ft_swap(&a, &b);
	return (0);
}
