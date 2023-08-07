/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuvo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:59:43 by thuvo             #+#    #+#             */
/*   Updated: 2023/07/11 19:21:24 by thuvo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	str[] = "hello";
	ft_strlen(str);
	printf("%d", ft_strlen(str));
	return (0);
}

/*
Fichier main.c pour tester C01_ex06
ne pas envoyer avec printf
*/
