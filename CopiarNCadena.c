#include<stdio.h>
int copiarCadena(char *, char *,int);
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
    int parada=2;
    n=longCadena(cad1);
    char *cad2;
    cad2=(char*)malloc(n);
    copiarCadena(cad1,cad2,parada);
}

int copiarCadena(char *cadOrigen, char *cadDestino,int numero){
    int m=longCadena(cadOrigen);
    int i;
    for(i=0; i<=numero;i++){
        cadDestino[i]=cadOrigen[i];
        printf("%c",cadDestino[i]);
    }
}
