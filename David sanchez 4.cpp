//Ejercicio 4



#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char cadena[100];

    printf("David por favor ingresa una cadena de texto: ");
    fgets(cadena, 100, stdin);

    int longitud = strlen(cadena);
    int inicio = 0;

    while (isspace(cadena[inicio])) {
        inicio++;
    }

    memmove(cadena, cadena + inicio, longitud - inicio + 1);
    printf("David la cadena sin espacios en blanco al principio es: %s\n", cadena);

    return 0;
}

