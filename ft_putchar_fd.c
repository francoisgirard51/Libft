/* ------------------------------ INFORMATIONS ------------------------------
Librairie :           Non-standard
Role de la fonction : sort un caractère dans un fichier donné
Commentaires :        ecrit le caractère 'c' sur le descripteur de fichier fd
Parametres :          1) c : caractère à écrire
					  2) fd : descripteur de fichier
Retourne :            N/A
---------------------------------------------------------------------------- */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
