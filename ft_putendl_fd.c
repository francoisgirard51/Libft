/* ------------------------------ INFORMATIONS ------------------------------
Librairie :           Non-standard
Role de la fonction : Sort la chaîne vers un fichier donné avec une nouvelle
                      ligne
Commentaires :        Ecrit la chaine s sur le descripteur de fichier fd
					  suivi d'un '\n'
Parametres :          1) s : chaîne de caractères à écrire
					  2) fd : descripteur de fichier
Retourne :            N/A
---------------------------------------------------------------------------- */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
