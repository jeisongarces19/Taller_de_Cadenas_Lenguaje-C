#include<stdio.h>
int copiarCadena(char *, char *,int,int);
int longCadena(char *cad1){
    int n=0;
    while(cad1[n] != '\0'){
        n++;
    }
    return n;
}
int main(){
    char *cad1="holamundo";
    int n;
    int comienzo=3;
    int parada=6;
    n=longCadena(cad1);
    char *cad2;
    cad2=(char*)malloc(n);
    copiarCadena(cad1,cad2,comienzo,parada);
}

int copiarCadena(char *cadOrigen, char *cadDestino,int numero_iniciar,int numero_parar ){
    int m=longCadena(cadOrigen);
    int i;

    for(i=numero_iniciar; i<=numero_parar;i++){
        cadDestino[i]=cadOrigen[i];
        printf("%c",cadDestino[i]);
    }
}
