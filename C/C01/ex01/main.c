/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuvo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:38:21 by thuvo             #+#    #+#             */
/*   Updated: 2023/07/13 11:40:38 by thuvo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft();

int	main(void)
{
	int	a;
	int	*pointeur_de_A = &a;
	int	**pt_de_ptA = &pointeur_de_A;
	int	***pt_de_pt_de_ptA = &pt_de_ptA;
	int	****pt4_de_ptA = &pt_de_pt_de_ptA;
	int	*****pt5_de_ptA = &pt4_de_ptA;
	int	******pt6_de_ptA = &pt5_de_ptA;
	int	*******pt7_de_ptA = &pt6_de_ptA;
	int	********pt8_de_ptA = &pt7_de_ptA;
	int	*********pt9_de_ptA = &pt8_de_ptA;

	a = 20;

	printf("adresse de a : %p\n", pointeur_de_A);
	printf("adresse de pointeur_de_A : %p\n", pointeur_de_A);
	printf("adresse de pt_de_ptA : %p\n", pt_de_ptA);
	printf("adresse de pt_de_pt_de_ptA : %p\n", pt_de_pt_de_ptA);
	printf("adresse de pt4_de_ptA : %p\n", pt4_de_ptA);
	printf("adresse de pt5_de_ptA : %p\n", pt5_de_ptA);
	printf("adresse de pt6_de_ptA : %p\n", pt6_de_ptA);
	printf("adresse de pt7_de_ptA : %p\n", pt7_de_ptA);
	printf("adresse de pt8_de_ptA : %p\n", pt8_de_ptA);
	printf("adresse de pt9_de_ptA : %p\n", pt9_de_ptA);

	printf("valeur de a avant : %d\n", a);
	printf("valeur de a apres : %d\n", ft_ultimate_ft(pt9_de_ptA));

	return (0);
}
