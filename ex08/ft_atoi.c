/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaguire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 22:29:52 by jmaguire          #+#    #+#             */
/*   Updated: 2018/07/07 22:30:08 by jmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_atoi(const char *str);

int		ft_atoi(const char *str)
{
	int i;
	int negative;
	int out;

	i = 0;
	negative = 1;
	if (!*str)
	{
		printf("%s\n", "ERROR: str null!");
		return (0);
	}
	if (str[0] == '-')
	{
		negative = -1;
	}
	while (*str != '\0')
	{
		
		i++;
	}
	out = 0 * negative;
	return out;
}

int		main(void)
{
	printf("%d\n", ft_atoi("7423334"));
	printf("%d\n", ft_atoi("0"));
	printf("%d\n", ft_atoi("-7423334"));
	return (0);	
}
