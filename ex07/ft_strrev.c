/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaguire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 17:13:03 by jmaguire          #+#    #+#             */
/*   Updated: 2018/07/07 22:30:50 by jmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>

void	ft_putchar(char c);
char	*ft_strrev(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/

char	*ft_strrev(char *str)
{
	int i;
	int j;
	int length;

	/* table length */
	length = 0;
	char temp[length];
	while (str[length] != '\0')
	{
		length = length + 1;
	}
	i = length - 1; /* swap characters using a temp table */
	j = 0;
	while (j <= length)
	{
		temp[j] = str[i];
		ft_putchar(str[i]);
		i--;
		j++;
	}
	return (str);
}

/*
int		main(void)
{
	char str[] = "EarthSalamander #42";

	ft_strrev(str);

	return (0);
} */