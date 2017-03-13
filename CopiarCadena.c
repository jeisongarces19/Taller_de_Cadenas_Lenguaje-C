#include<stdio.h>
char copiarCadena(char*);
int longCadena(char *);

int longCadena(char *cad2){
    int n=0;
    while(cad2[n] != '\0'){
        n++;
    }
    return n;
}
int main(){
    char *cad1="hola";
    copiarCadena(cad1);
}

char copiarCadena(char *cadOrigen){
    int m;
    m=longCadena(cadOrigen);
    char *cadDestino;
    int i;
    for(i=0; i<=m;i++){
        cadDestino[i]=cadOrigen[i];
        printf("%c",cadDestino[i]);
    }
}