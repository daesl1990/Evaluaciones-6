//Ejercicio 5


#include <stdio.h>
#include <string.h>

void eliminarCaracteres(char *cadena, int posicion, int cantidad) {
    memmove(&cadena[posicion], &cadena[posicion + cantidad], strlen(cadena) - cantidad - posicion + 1);
}

int main() {
    char cadena[100];
    int posicion, cantidad;

    printf("David por favor ingresa una cadena de texto: ");
    fgets(cadena, 100, stdin);

    printf("David por favor ingresa la posicion inicial para eliminar: ");
    scanf("%d", &posicion);

    printf("David por favor ingresa la cantidad de caracteres a eliminar: ");
    scanf("%d", &cantidad);

    eliminarCaracteres(cadena, posicion, cantidad);

    printf("David la cadena resultante es: %s\n", cadena);

    return 0;
}

