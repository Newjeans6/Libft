/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 12:08:26 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/11 08:19:33 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != c)
	{
		i++;
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
/*#include <stdio.h>
int	main(void)
{
	const char *str = "Hello, World";
	char c = 'o';

	char *result = ft_strchr(str, c);
	if (result)
		printf("Trouvé '%c': %s\n", c, result);
	else
		printf("Pas la '%c'\n", c);
	return (0);
}*:
