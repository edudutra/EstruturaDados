#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    // declaração da string para a frase
    char frase [100];
    int i, tam;
    // leitura da string
    printf ("Digite uma frase de até 100 caracteres:\n");
    fgets (frase, 100, stdin); 
    tam = strlen (frase); // tam armazenará o tamanho da frase
    for (i = 0; i<tam; i++){
          if (frase [i] == ' ')
                frase [i] = '_';
    }
    puts (frase);
}

