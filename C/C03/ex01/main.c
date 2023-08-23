/* **************************************************************i************ */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuvo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:40:08 by thuvo             #+#    #+#             */
/*   Updated: 2023/07/25 22:08:43 by thuvo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// File main.c to check C03 ex01

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main (void)
{
	char	str1[] = "bcdefgh";
	char	str2[] = "bcDefgh";
	char	str3[] = "bcdefgh";
	unsigned int	n;

	n = 3;
    // try with n = 2, before the difference

	printf("Initial str1 : %s\n", str1);
	printf("Initial str2 : %s\n", str2);
	printf("strncmp str1 str2 : %d\n", strncmp(str1, str2, n));
	printf("Compare str1 & str2 : %d \n", ft_strncmp(str1, str2, n));
	printf("\n");
		
	printf("Initial str2 : %s\n", str2);
	printf("Initial str1 : %s\n", str1);
	printf("strncmp str2 str1 : %d\n", strncmp(str2, str1, n));
	printf("Compare str2 & str1 : %d\n", ft_strncmp(str2, str1, n));
	printf("\n");

	printf("Initial str1 : %s\n", str1);
	printf("Initial str3 : %s\n", str3);
	printf("strncmp str1 str3 : %d\n", strncmp(str1, str3, n));
	printf("Compare str1 & str3 : %d\n", ft_strncmp(str1, str3, n));

	return (0);
}
