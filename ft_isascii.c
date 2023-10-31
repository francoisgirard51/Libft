/* ------------------------------ INFORMATIONS ------------------------------
Librairie:           <ctype.h>
Role de la fonction: test les caractères de la table ASCII.
Commentaires :       verifie si le caractère est dans la table ASCII, n'importe
					 quel caractère octal entre 0 et 0177 inclusivement
Parametres :         1) un caractère à tester
Retourne :           1 si le caractère est dans la table ASCII, 0 sinon
---------------------------------------------------------------------------- */

#include "libft.h"

int	ft_isascii(int c)
{
	if ((c < 0) || (c > 127))
		return (0);
	return (1);
}
