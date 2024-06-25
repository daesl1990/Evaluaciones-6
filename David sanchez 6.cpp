//Ejercicio 6


#include <stdio.h>
#include <string.h>

void eliminarPrimeraAparicion(char *cadena, char *subcadena) {
    char *posicion = strstr(cadena, subcadena);

    if (posicion != NULL) {
        memmove(posicion, posicion + strlen(subcadena), strlen(posicion + strlen(subcadena)) + 1);
    }
}

int main() {
    char cadena[100];
    char subcadena[50];

    printf("David por favor ingresa una cadena de texto: ");
    fgets(cadena, 100, stdin);

    printf("David ingresa la subcadena a eliminar: ");
    fgets(subcadena, 50, stdin);

    eliminarPrimeraAparicion(cadena, subcadena);

    printf("David la cadena resultante es: %s\n", cadena);

    return 0;
}

