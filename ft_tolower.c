/* ------------------------------ INFORMATIONS ------------------------------
Librairie :           <ctype.h>
Role de la fonction : conversion des majuscules en minuscules
Commentaires :        Si le caractère passé en argument est une majuscule,
                      converti en minuscule
Parametres :          1) c : caractère à convertir
Retourne :            le caractère converti en minuscule
---------------------------------------------------------------------------- */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
