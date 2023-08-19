#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100]; // Supongamos que la cadena no será más larga que 100 caracteres

    printf("Ingresa una cadena: ");
    fgets(cadena, sizeof(cadena),stdin); // Lee la cadena ingresada por el usuario, limitada a 99 caracteres
    int longitud = strlen(cadena);
    
    
    if(cadena[0] == '/' && cadena[1] == '*' && cadena[longitud - 2] == '/' && cadena[longitud - 3]== '*'){
    	printf("Formato valido de comentario.");
	}
	
	else if(cadena[0] == '/' && cadena[1] == '/'){
		printf("Formato valido de comentario.");
	}
	
	else{
		printf("Formato no valido de comentario.");
	}

    //printf("\nLa longitud de la cadena es: %d\n", longitud);

    return 0;
}

/*

#include <stdio.h>
#include <string.h>

int main() {
    char cadena[100]; // Supongamos que la cadena no será más larga que 100 caracteres

    printf("Ingresa una cadena: ");
    scanf("%99[^\n]", cadena); // Lee la cadena ingresada por el usuario, limitada a 99 caracteres

    int longitud = strlen(cadena);
    int indice = 0;
    int inicioComentario = 0;
    int finComentario = 0;
    int esComentario = 0;

    while (indice < longitud - 1) {
        if (cadena[indice] == '/' && cadena[indice + 1] == '*') {
            inicioComentario = indice;
            indice += 2;

            while (indice < longitud - 1) {
                if (cadena[indice] == '*' && cadena[indice + 1] == '/') {
                    finComentario = indice + 1;
                    esComentario = 1;
                    break;
                }
                indice++;
            }
        }

        indice++;
    }

    if (esComentario && finComentario > inicioComentario) {
        printf("Es un comentario válido.\n");
    } else {
        printf("No es un comentario válido.\n");
    }

    return 0;
}

*/

