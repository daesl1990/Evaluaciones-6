//Ejercicio 8


#include <stdio.h>
#include <string.h>

void sustituirCadena(char *cadena, char *cadenaABuscar, char *cadenaANueva) {
    char *posicion = strstr(cadena, cadenaABuscar);

    if (posicion != NULL) {
        memmove(posicion + strlen(cadenaANueva), posicion + strlen(cadenaABuscar), strlen(posicion + strlen(cadenaABuscar)) + 1);
        memcpy(posicion, cadenaANueva, strlen(cadenaANueva));
    }
}

int main() {
    char cadena[100];
    char cadenaABuscar[50];
    char cadenaANueva[50];

    printf("David por favor ingresa una cadena de texto: ");
    fgets(cadena, 100, stdin);

    printf("David ingresa la subcadena a buscar: ");
    fgets(cadenaABuscar, 50, stdin);

    printf("David ingresa la nueva subcadena: ");
    fgets(cadenaANueva, 50, stdin);

    sustituirCadena(cadena, cadenaABuscar, cadenaANueva);

    printf("David La cadena resultante es: %s\n", cadena);

    return 0;
}

