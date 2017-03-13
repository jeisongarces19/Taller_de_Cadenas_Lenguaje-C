#include<stdio.h>//ejercicio 1

int longCadena(char *cad1){
    int n=0;
    while(cad1[n] != '\0'){
        n++;
    }
    return n;
}

int main(){
    char *cad1="hola";
    int n;
    n=longCadena(cad1);
    printf("\nEl Tamaño de la cadena es: %d\n",n);
}
