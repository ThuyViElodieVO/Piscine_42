/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuvo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:37:18 by thuvo             #+#    #+#             */
/*   Updated: 2023/07/19 11:13:43 by thuvo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	str_lowercase_letter[] = "bdewee";
	printf("Initial str_lowercase_letter : %s\n", str_lowercase_letter);
	printf("Resultat str_lowercase_letter : %s\n", ft_strlowcase(str_lowercase_letter));

	char    str_blend[] = "5zxcvg698&^%$POIKJNH";
    printf("Initial str_blend : %s\n", str_blend);
    printf("Resultat str_blend : %s\n", ft_strlowcase(str_blend));

	char	str_capital_letter[] = "QWERTYUIOOP";
	printf("Initial str_capital_letter : %s\n", str_capital_letter);
	printf("Resultat str_capital_letter : %s\n", ft_strlowcase(str_capital_letter));

	char	str_digit[] = "6789";
	printf("Resultat str_digit : %s\n", ft_strlowcase(str_digit));

	char	str_zero[] = "0";
	printf("Resultat str_zero : %s\n", ft_strlowcase(str_zero));

	char	str_char[] = "%^&";
	printf("Resultat str_char : %s\n", ft_strlowcase(str_char));

	char	str_null[] = "";
	printf("Resultat str_null : %s\n", ft_strlowcase(str_null));

	char	str_space[] = " ";
	printf("Resultat str_space : %s\n", ft_strlowcase(str_space));

	return (0);
}

// file main.c to check C02 ex08
// Do not send this for evaluation
