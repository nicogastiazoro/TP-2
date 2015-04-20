/*
ejercicio 1.10

20042015 SSL k2051

Gastiazoro Nicolas Rodrigo

El programa toma una cadena como entrada y la retorna como salida reemplazando
 los tabuladores por \\t, los retrocesos por \\b y las diagonales invertidas por \\
*/


#include <stdio.h>

int c;

int main()
{
    while((c = getchar()) != EOF){
        if (c == '\t'){
            printf("\\t");
        }
        else if (c == '\b'){
            printf("\\b");
        }
        else if (c == '\\'){
            printf("\\");
        }
        else {
            putchar(c);
        }
    }
    return 0;
}