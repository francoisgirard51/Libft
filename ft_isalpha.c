/* ------------------------------ INFORMATIONS ------------------------------
Librairie:           <ctype.h>
Role de la fonction: test de caractère alphabétique.
Commentaires :       Verifie si le caractère est alphabétique, équivalent à
		     ft_isupper ou ft_islower
Parametres :         1) c : un caractère à tester
Retourne :           1 si le caractère est alphabétique, 0 sinon
---------------------------------------------------------------------------- */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c < 'A') || (c > 'Z' && c < 'a') || (c > 'z'))
		return (0);
	return (1);
}
