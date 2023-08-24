/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuvo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 13:21:21 by thuvo             #+#    #+#             */
/*   Updated: 2023/07/25 16:59:09 by thuvo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// File main.c to check C03 ex03
// Do not sent this for evaluation

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main (void)
{
	unsigned int	nb;
	char src[] = "Matters";
	char dest[30] = "Everything_";
	
	nb = 8;
	printf("Initial src : %s\n", src);
	printf("Initial dest : %s\n", dest);
	printf("Resultat strncat : %s\n", ft_strncat(dest, src, nb));
	return (0);
}
