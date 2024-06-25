//Ejercicio 2



#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100];
    int n;

    printf("Hola David por favor ingresa una cadena de texto: ");
    fgets(cadena, 100, stdin);

    printf("David ingresa la cantidad de caracteres a extraer al final: ");
    scanf("%d", &n);

    int longitud = strlen(cadena);

    if (n > longitud) {
        printf("Error: Lo siento David la cantidad de caracteres a extraer supera la longitud de la cadena.\n");
    } else {
        // Calculamos el índice donde comenzar a extraer los últimos n caracteres
        int inicio = longitud - n;
        printf("David los ultimos %d caracteres son: %s\n", n, &cadena[inicio]);
    }

    return 0;
}

