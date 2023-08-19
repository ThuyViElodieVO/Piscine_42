/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuvo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 20:15:36 by thuvo             #+#    #+#             */
/*   Updated: 2023/07/17 15:05:56 by thuvo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main()
{
	char	str_lowercase_letter[] = "hello";
	printf("Resultat de str_lowercase_letter : %d\n", ft_str_is_alpha(str_lowercase_letter));

	char	str_capital_letter[] = "ONIGIRI";
	printf("Resultat de str_capital_letter : %d\n", ft_str_is_alpha(str_capital_letter));

	char	str_digit[] = "0123456789";
	printf("Resultat de str_digit : %d\n", ft_str_is_alpha(str_digit));

	char	str_digit_letter[] = "0123ALpha";
	printf("Resultat de str_digit_letter : %d\n", ft_str_is_alpha(str_digit_letter));

	char	str_char[] = "*&^";
	printf("Resultat de str_char : %d\n", ft_str_is_alpha(str_char));

	char 	str_null[] = "";
	printf("Resultat de str_null : %d\n", ft_str_is_alpha(str_null));

	return (0);
}

// file main.c to check C02 ex02
