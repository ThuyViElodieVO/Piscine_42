/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuvo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 13:21:21 by thuvo             #+#    #+#             */
/*   Updated: 2023/07/25 17:00:44 by thuvo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// File main.c to check C03 ex02

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main (void)
{
	char src[] = "world";
	char dest[20] = "hello_";
    //important to leave boxes empty in dest to make room to copy src
	
    printf("Initial src : %s\n", src);
	printf("Initial dest : %s\n", dest);
	printf("Resultat strcat : %s\n", ft_strcat(dest, src));
	return (0);
}
