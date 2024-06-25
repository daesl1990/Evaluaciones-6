//Ejercicio 3



#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char cadena[100];

    printf("David por favor ingresa una cadena de texto: ");
    fgets(cadena, 100, stdin);

    int longitud = strlen(cadena);

    while (longitud > 0 && isspace(cadena[longitud - 1])) {
        cadena[longitud - 1] = '\0';
        longitud--;
    }

    printf("David la cadena sin espacios en blanco al final es: %s\n", cadena);

    return 0;
}

