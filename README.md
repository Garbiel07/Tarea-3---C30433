# Tarea-3---C30433
## Ejercicio 1
Primero, se declara un string como variable tipo char, un puntero que apunta a dicho string, una variable de tipo char llamada clave y un contador iniciado en 0. Luego se le pide al usuario ingresar un string con un printf y se recolecta usando un scanf que lo almacena en el string definido al principio. Se hace lo mismo para la clave. Luego, se utiliza un ciclo while que corre mientras el puntero apunte a un valor distinto de '\0' (El valor que se utiliza para declarar el final de un string): Si el puntero apunta aun valor equivalente a la clave ingresada, se suma 1 al contador. Finalmente, se imprimen los resultados de clave string y contador, y se realiza un ciclo for para imprimir el string en orden inverso. Esto último se hace iniciando el ciclo en el valor que corresponde al tamaño del string - 1, y se acaba cuando llega a 0. 

## Ejercicio 2
### revisar_numero
Esta función verifica si un número es válido tomando como parámetros el puntero const char *str (el const es para que no pueda ser modificado dentro dela función). Se utiliza un ciclo while con la función isspace del directorio ctype.h para ignorar los espacios iniciales. Luego se utiliza otro ciclo while que verifica que todos los caracteres en la linea sean dígitos incluyendo \0 y \n, y se suma 1 al contador si esto se cumple. 

### main
En el main se abre el archivo, se usa un ciclo para iterar a través de todos los valores y enviar ya sea a standard input o standard output los valores dependiendo de si fueron válidos o inválidos por la función revisar numero.
