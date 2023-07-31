/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuvo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:19:04 by thuvo             #+#    #+#             */
/*   Updated: 2023/07/05 15:25:08 by thuvo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/* #include permet d'appeler la librairie
 
 * unistd.h : fichier d'en-tete, donne acces API syst exploitation POSIX
 * composee de fonctions dont write */

/* fonction write : ecrire sur un descripteur de fichier
 * write(1, ,); le 1 qui est affiche en 1er indique qu'on veut le resultat sorte ici sur ce terminal
 * write (, &c,); &c indique qu'on veut que ce soit des caracteres qui sortent
 * write (,, 1); ce 1 indique que le nombre de caracteres que je souhaite
 imprimer ici est 1 */

/* dans cet exo on nous demande juste de savoir ecrire la fonction
 * si on veut verifier que ca marche, faut lancer le programme avec main, qu'on ne doit pas laisser dans cet exo
 
 int	main ()
 {
 	ft_putchar('b');
 }
*/
