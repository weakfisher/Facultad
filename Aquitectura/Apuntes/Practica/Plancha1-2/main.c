#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char *argv[])
{
    if (argc !=3){
        printf("sddadsdsdasd");
        return 1;
    }
    char *input_text = argv[1];
    int xor_key = atoi(argv[2]);
    printf("dsaadsada");
      char encoded_text[1024]; // Tamaño máximo de la cadena codificada

    int i;
    for (i = 0; input_text[i] != '\0'; i++) {
        encoded_text[i] = input_text[i] ^ xor_key;
    }
    encoded_text[i] = '\0'; // Agregar un carácter nulo al final de la cadena

    printf("Texto codificado: %s\n", encoded_text);

    return 0;
}