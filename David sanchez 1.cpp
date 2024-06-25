//Ejercicio 1


#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100];
    int n;

    printf("Hola David por favor ingresa una cadena de texto: ");
    fgets(cadena, 100, stdin);

    printf("David por favor ingresa la cantidad de caracteres a extraer: ");
    scanf("%d", &n);

    if (n > strlen(cadena)) {
        printf("Error: Lo siento David la cantidad de caracteres a extraer supera la longitud de la cadena.\n");
    } else {
        cadena[n] = '\0'; 
        printf("David los primeros %d caracteres son: %s\n", n, cadena);
    }
    return 0;
}

