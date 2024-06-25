//Ejercicio 9


#include <stdio.h>
#include <string.h>

int contarOcurrencias(char *cadena, char *subcadena) {
    int contador = 0;
    char *posicion = cadena;

    while ((posicion = strstr(posicion, subcadena)) != NULL) {
        contador++;
        posicion += strlen(subcadena);
    }

    return contador;
}

int main() {
    char cadena[100];
    char subcadena[50];

    printf("David por favor ingresa una cadena de texto: ");
    fgets(cadena, 100, stdin);

    printf("David ingresa la subcadena a buscar: ");
    fgets(subcadena, 50, stdin);

    int ocurrencias = contarOcurrencias(cadena, subcadena);

    printf("David la subcadena '%s' aparece %d veces en la cadena.\n", subcadena, ocurrencias);

    return 0;
}

