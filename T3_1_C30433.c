#include <stdio.h>
#include <stdlib.h>

int main(){
    char string[]="string";
    char *ptr = string;
    char clave;
    int cont=0;
    printf("ingrese un string: ");
    scanf("%s", string);
    printf("digite el caracter a buscar: ");
    scanf(" %c", &clave);
    while (*ptr != '\0'){
        if (*ptr == clave){
            cont++;
        }
        ptr++;
    }
    printf("El caracter %c se encuentra %d veces en %s\n", clave, cont, string);
    printf("El string en orden inverso es: ");
    for (int i=sizeof(string)-1; i>=0; i--){
        printf("%c", string[i]);
    }
    return 0;
}