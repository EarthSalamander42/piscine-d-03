/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaguire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 14:34:56 by jmaguire          #+#    #+#             */
/*   Updated: 2018/07/07 17:39:15 by jmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
int		ft_strlen(char *str);
*/

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	return i;
}

/*
int		main(void)
{
	char *str = "EarthSalamander #42";
	char c;

	ft_strlen(str);
	write(1, &c, 1);
	c = ft_strlen(str) + '0';
}
*/