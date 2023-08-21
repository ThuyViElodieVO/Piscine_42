/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuvo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:18:03 by thuvo             #+#    #+#             */
/*   Updated: 2023/07/22 22:09:40 by thuvo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (! (str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

// 32 : ASCII for space, first printable character
// 126 : ASCII for ~, last printable character