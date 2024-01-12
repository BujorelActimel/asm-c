/*
Se dau doua siruri continand caractere. Sa se calculeze si sa se afiseze rezultatul 
concatenarii tuturor caracterelor tip cifra zecimala din cel de-al doilea sir dupa cele 
din primul sir si invers, rezultatul concatenarii primului sir dupa al doilea.

Exemplu:
sir1: "a12b"
sir2: "0c2"
rezultat: 0212, 1202
*/

#include <stdio.h>

int is_digit(char c);

void main()
{
    char sir1[] = "a12b";
    char sir2[] = "0c2";
    char sir3[100];
    char sir4[100];
    int i = 0, j = 0, k = 0, l = 0;

    while (sir1[i] != '\0')
    {
        if (is_digit(sir1[i]))
        {
            sir3[j] = sir1[i];
            j++;
        }
        i++;
    }
    sir3[j] = '\0';

    while (sir2[k] != '\0')
    {
        if (is_digit(sir2[k]))
        {
            sir4[l] = sir2[k];
            l++;
        }
        k++;
    }
    sir4[l] = '\0';

    printf("%s%s\n", sir4, sir3);
    printf("%s%s\n", sir3, sir4);
}

// int is_digit(char c)
// {
//     return c >= '0' && c <= '9';
// }
