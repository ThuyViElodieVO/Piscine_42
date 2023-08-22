/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuvo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:40:08 by thuvo             #+#    #+#             */
/*   Updated: 2023/07/19 21:40:31 by thuvo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// File main.c to check C03 ex00

#include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main (void)
{
	char	str1[] = "bcdefgh";
	char	str2[] = "bcDefgh";
	char	str3[] = "bcdefgh";

	printf("Initial str1 : %s\n", str1);
	printf("Initial str2 : %s\n", str2);
	ft_strcmp(str1, str2);
	// strcmp(str1, str2);
	printf("Compare str1 & str2 : %d\n", ft_strcmp(str1, str2));
    // Value = substraction of ASCII of the 2 id
	printf("\n");
		
	printf("Initial str2 : %s\n", str2);
	printf("Initial str1 : %s\n", str1);
	ft_strcmp(str2, str1);
	// strcmp(str2, str1);
	printf("Compare str2 & str1 : %d\n", ft_strcmp(str2, str1));
	printf("\n");

	printf("Initial str1 : %s\n", str1);
	printf("Initial str3 : %s\n", str3);
	ft_strcmp(str1, str3);
	// strcmp(str1, str3);
	printf("Compare str1 & str3 : %d\n", ft_strcmp(str1, str3));

	return (0);
}
