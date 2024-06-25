//Ejercicio 7


#include <stdio.h>
#include <string.h>

void insertarCadena(char *cadena, char *cadenaAInsertar, int posicion) {
    memmove(&cadena[posicion + strlen(cadenaAInsertar)], &cadena[posicion], strlen(cadena) - posicion + 1);
    memcpy(&cadena[posicion], cadenaAInsertar, strlen(cadenaAInsertar));
}

int main() {
    char cadena[100];
    char cadenaAInsertar[50];
    int posicion;

    printf("David por favor ingresa una cadena de texto: ");
    fgets(cadena, 100, stdin);

    printf("David ingresa la cadena a insertar: ");
    fgets(cadenaAInsertar, 50, stdin);

    printf("David ingresa la posición para insertar: ");
    scanf("%d", &posicion);

    insertarCadena(cadena, cadenaAInsertar, posicion);

    printf("David La cadena resultante es: %s\n", cadena);

    return 0;
}

