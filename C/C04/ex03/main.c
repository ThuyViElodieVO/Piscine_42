/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuvo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 10:14:31 by thuvo             #+#    #+#             */
/*   Updated: 2023/07/21 10:55:31 by thuvo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// File main.c to check C04 ex03
// Do not send this for evaluation

#include <stdio.h>

int	ft_atoi(char *str);

int	main (void)
{
	char	*str = " ---+--+1234ab567";
	printf("%d \n", ft_atoi(str));
}
