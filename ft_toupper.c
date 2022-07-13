/* ------------------------------ INFORMATIONS ------------------------------
Librairie :           <ctype.h>
Role de la fonction : conversion de minuscules en majuscules
Commentaires :        Si le caractère passé en argument est une minuscule,
                      converti en majuscule
Parametres :          1) c : caractère à convertir
Retourne :            le caractère converti en majuscule
---------------------------------------------------------------------------- */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		c = c - 32;
	return (c);
}
