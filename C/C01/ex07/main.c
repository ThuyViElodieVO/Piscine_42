/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuvo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 19:34:27 by thuvo             #+#    #+#             */
/*   Updated: 2023/07/27 02:35:58 by thuvo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

int     main(void)
{
    int tab[17] = {0, 2, 98, 33, 4, 598, 60, 7, 86, 9, 100, 11, 162, 3, 14, 45, 16};
    int i;
    int size;
    
    i = 0;
    size = 17;
    while (i < size)
    {
        printf("Tab init : %d\n", tab[i]);
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
File main.c to check C01_ex07
Do not send this for evaluation
*/
