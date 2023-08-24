/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuvo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 11:36:04 by thuvo             #+#    #+#             */
/*   Updated: 2023/07/21 11:40:17 by thuvo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// File main.c to check C04 ex00
// Do not send this for evaluation

#include <stdio.h>

int	ft_strlen(char *str);

int     main(void)
{
        char    str[] = "ohlala";
        printf("%d\n", ft_strlen(str));
        return (0);
}
