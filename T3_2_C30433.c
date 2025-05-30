
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//Verifica si un número es válido
int revisar_numero(const char *str) {
    int i=0;
    
    //ignora espacios iniciales
    while (isspace(str[i])) {
        i++;
    }
    // Verifica que todos los caracteres sean digitos
    while (str[i] != '\0' && str[i] != '\n');
        if (!isdigit(str[i])){
            return 0;
        i++;
    }
    return 1;
}

int main () {

    //abre un archivo en modo read y lo lee. Si no hay archivo captura
    // el error 
    FILE *archivo = fopen("entrada.txt", "r");
    if (!archivo) {
        perror("No se pudo abrir el archivo");
        return 1;
    }

    //Define un string de caracteres "linea" y utiliza un condicional
    //para separar errores de outputs mientras detecte numeros validos
    //en linea
    char linea[100];
    while (fgets(linea, sizeof(linea), archivo)) {
        if (revisar_numero(linea)) {
            fprintf(stdout, "Numero: '%s", linea);
        }
        else {
            fprintf(stderr, "Error - Linea invalida: '%s'", linea);
        }
    }

    fclose(archivo);
    return 0;
}