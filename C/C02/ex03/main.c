/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuvo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:18:27 by thuvo             #+#    #+#             */
/*   Updated: 2023/07/17 15:49:19 by thuvo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main()
{
	char	str_positive_digit[] = "123";
	printf("Resultat str_positive_digit : %d\n", ft_str_is_numeric(str_positive_digit));

	char	str_negative_digit[] = "-1";
	printf("Resultat str_negative_digit : %d\n", ft_str_is_numeric(str_negative_digit));

	char	str_zero[] = "0";
	printf("Resultat str_zero : %d\n", ft_str_is_numeric(str_zero));

	char	str_zero_neg[] = "-0";
	printf("Resultat str_zero_neg : %d\n", ft_str_is_numeric(str_zero_neg));

	char	str_lowercase_letter[] = "abc";
	printf("Resultat str_lowercase_letter : %d\n", ft_str_is_numeric(str_lowercase_letter));

	char	str_capital_letter[] = "DEFG";
	printf("Resultat str_capital_letter : %d\n", ft_str_is_numeric(str_capital_letter));

	char	str_char[] = "%^&";
	printf("Resultat str_char : %d \n", ft_str_is_numeric(str_char));

	char	str_blend[] = "qwerTY987";
	printf("Resultat str_blend : %d \n", ft_str_is_numeric(str_blend));

	char	str_null[] = "";
	printf("Resultat str_null : %d \n", ft_str_is_numeric(str_null));

	return (0);
}

// file main.c to check C02 ex03
// Do not send this for evaluation
