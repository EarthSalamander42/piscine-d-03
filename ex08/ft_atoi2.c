/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaguire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 22:29:52 by jmaguire          #+#    #+#             */
/*   Updated: 2018/07/07 22:30:08 by jmaguire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(const char *str) {
	// calculate 10 ^ strlen(str)
	int hd_pow10 = 1;
	for (const char *s = str + 1; *s != '\0'; s++)
		hd_pow10 *= 10;

	// grab digits from string
	int out = 0;
	for (const char *s = str; *s != '\0'; s++) {
		out += hd_pow10 * (*s - 0x30);
		hd_pow10 /= 10;
	}
	return out;
}

int		main(void) {
	printf("%d\n", ft_atoi("1212234"));
	printf("%d\n", ft_atoi("7423334"));
	printf("%d\n", ft_atoi("12233134"));
	printf("%d\n", ft_atoi("123333214"));
	printf("%d\n", ft_atoi("1656455"));
	return 0;
}