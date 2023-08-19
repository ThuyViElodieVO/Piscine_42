/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuvo <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 21:13:10 by thuvo             #+#    #+#             */
/*   Updated: 2023/07/12 19:43:18 by thuvo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h> // pour appeler la vraie fct strncpy

void	ft_strncpy(char *dest, char *src, unsigned int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int	i;
	int	n;
	char	dest[20] = "XXXXXXXXXXXXXXXXXXZ";
       	// 19 char pour dest + 1 case pour la fin de chaine de caractere '/0' !!!
	// faut que le tableau soit suffisamment grand pour contenir chaine + fin
	// on a ecrit dest[20] pour imposer 20 mais sinon on pouvait ecrire *dest
	// on aurait pu mettre plus de 20 si on voulait etre sur tab grand
	char	*src = "TAKOYAKI";
	// pour visualiser on fait taille src < taille dest
	
	i = 0;
	n = 15;
	// pour bien verif et visuel : on initialise n plus grand que dest et src
	
	write (1, "dest initial : ", 15);
	while (dest[i] != '\0')
	{	
		ft_putchar(dest[i]);
		i++;
	}
	ft_putchar('\n');

	i = 0;
	ft_strncpy(dest, src, n);
	// essayer ensuite sans la fct ft_strncpy(dest, src, n);
	// mais en remplacant avec la vraie : strncpy(dest, src, n);
	
	write(1, "dest apres copie : ", 19);
	while (dest[i] != '\0')
	{
		ft_putchar(dest[i]);
		i++;
	}
	// essayer avec dest[i] != 'Z' pour bien visualiser
	// vmt pour l'exemple
	// avec ./a.out | cat - e
	// ca affiche : dest apres copie : TAKOYAKI^@^@^@^@^@^@^@XXX$
	// bien que dest[] a copie src[]
	// et ensuite on voit le reste des caracteres de dest[]
	// et qu'il y a des bytes pour completer
	// sinon le vrai parametre dans dans while : dest[i] != '\0'

	ft_putchar('\n');
	return (0);
}

//Fichier main.c pour eval C02_ex01

/* la fausse fct (et la vraie aussi )va afficher :
dest initial : XXXXXXXXXXXXXXXXXXZ$
dest apres copie : TAKOYAKI$
*/
