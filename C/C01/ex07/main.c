/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuvo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:34:27 by thuvo             #+#    #+#             */
/*   Updated: 2023/07/11 12:12:56 by thuvo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

int     main(void)
{
        int     tab[5] = {0, 1, 2, 3, 4};
        int     i;
	int	size;

        i = 0;
	size = 5;
	while (i < size)
	{
		printf("tab init : %d\n", tab[i]);
		i++;
	}
	write (1, "\n", 1);
        ft_rev_int_tab(tab, size);
	i = 0;
        while (i < size)
        {
                printf("Result : %d\n", tab[i]);
                i++;
        }
        return (0);
}

/*
Fichier main.c pour eval C01_ex07
ne pas utiliser printf sinon
*/
