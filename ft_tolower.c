/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:04:15 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/09 13:29:50 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c > 96 && c < 123)
		c += 32;
	return (c);
}
/*#include <stdio.h>

int main(void)
{
	char c1 = 'A';

	printf("'%c' > '%c'\n", c1, ft_tolower(c1));
	return (0);
}*/
