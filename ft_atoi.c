/* ------------------------------ INFORMATIONS ------------------------------
Librairie :          <stdlib.h>
Role de la fonction: converti des chaînes de caractères ASCII en nombre entier
Commentaires :       N/A
Parametres :         1) str : chaîne de caractères à convertir en int
Retourne :           La valeur convertie
---------------------------------------------------------------------------- */

#include "libft.h"

int	ft_atoi(const char *str)
{
    int				i;
    int				sign;
    unsigned int	nb;

    i = 0;
    sign = 1;
    nb = 0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
        i++;
    if (str[i] == '-')
        sign = -1;
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb = nb * 10 + (str[i] - '0');
        i++;
    }
    return (nb * sign);
}
