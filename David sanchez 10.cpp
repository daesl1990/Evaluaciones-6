//Ejercicio


#include <stdio.h>
#include <string.h>

void borrarApariciones(char *cadena, char *subcadena) {
    int longitudSubcadena = strlen(subcadena);
    char *posicion = cadena;

    while ((posicion = strstr(posicion, subcadena)) != NULL) {
        memmove(posicion, posicion + longitudSubcadena, strlen(posicion + longitudSubcadena) + 1);
    }
}

int main() {
    char cadena[100];
    char subcadena[50];

    printf("David por favor ingresa una cadena de texto: ");
    fgets(cadena, 100, stdin);

    printf("David ingresa la subcadena a borrar: ");
    fgets(subcadena, 50, stdin);

    borrarApariciones(cadena, subcadena);

    printf("David la cadena resultante es: %s\n", cadena);

    return 0;
}

