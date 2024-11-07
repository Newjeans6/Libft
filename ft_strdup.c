/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnaessen <pnaessen@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:18:49 by pnaessen          #+#    #+#             */
/*   Updated: 2024/11/07 15:08:54 by pnaessen         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	dest = (char *)malloc((i + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>

int main(void)
{
    const char *str = "Hello, world";
    char *dup_str;

    dup_str = ft_strdup(str);

    if (dup_str != NULL)
    {
        printf("Original : %s\n", str);
        printf("Duplicated : %s\n", dup_str);
        free(dup_str);
    }
    else
        printf("Fail\n");
    return 0;
}

