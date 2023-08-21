/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuvo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:37:18 by thuvo             #+#    #+#             */
/*   Updated: 2023/07/22 22:14:04 by thuvo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main()
{
	char	str_lowercase_letter[] = "bdewee";
	printf("Resultat str_lowercase_letter : %d\n", ft_str_is_printable(str_lowercase_letter));

	char	str_capital_letter[] = "QWERTYUIOOP";
	printf("Resultat str_capital_letter : %d\n", ft_str_is_printable(str_capital_letter));

	char	str_positive_digit[] = "12345";
	printf("Resultat str_positive_digit : %d\n", ft_str_is_printable(str_positive_digit));

	char	str_neg_digit[] = "-6789";
	printf("Resultat str_neg_digit : %d\n", ft_str_is_printable(str_neg_digit));

	char	str_zero[] = "0";
	printf("Resultat str_zero : %d\n", ft_str_is_printable(str_zero));

	char	str_char[] = "%^&";
	printf("Resultat str_char : %d\n", ft_str_is_printable(str_char));

	char	str_blend[] = "5zxcvg5698&^%$";
	printf("Resultat str_blend : %d\n", ft_str_is_printable(str_blend));

	char	str_null[] = "";
	printf("Resultat str_null : %d\n", ft_str_is_printable(str_null));

	char	str_space[] = " ";
	printf("Resultat str_space : %d\n", ft_str_is_printable(str_space));
	
	return (0);
}

// file main.c to check C02 ex06
