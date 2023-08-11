/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuvo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 21:13:10 by thuvo             #+#    #+#             */
/*   Updated: 2023/07/12 19:04:49 by thuvo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_strcpy(char *dest, char *src);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int	i;
	char	dest[] = {"XXXXXXXX"};
	char	src[] = {"TAKOYAKI"};
	
	i = 0;
	write (1, "dest initial : ", 15);
	while (dest[i] != '\0')
	{	
		ft_putchar(dest[i]);
		i++;
	}
	ft_putchar('\n');
	
	i = 0;
	ft_strcpy(dest, src);	
	write(1, "dest apres copie : ", 19);
	while (dest[i] != '\0')
	{
		ft_putchar(dest[i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}

/*
File main.c to check C02_ex00
Do no sent this for evaluation
*/
