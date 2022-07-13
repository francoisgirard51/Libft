/* ------------------------------ INFORMATIONS ------------------------------
Librairie:           <ctype.h>
Role de la fonction: test des caractères alphanumérique
Commentaires :       Verifie si le caractère est alphanumérique, équivalent à
		     ft_isalpha ou ft_isdigit
Parametres :         1) c : un caractère à tester
Retourne :           1 si le caractère est alphanumérique, 0 sinon
---------------------------------------------------------------------------- */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c < '0') || (c > '9' && c < 'A') || (c > 'Z' && c < 'a') || (c > 'z'))
		return (0);
	return (1);
}
