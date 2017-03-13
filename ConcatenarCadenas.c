#include<stdio.h>
#include <stdlib.h>

int Concatenar_cadena(char *, char *);
int longCadena(char *cad){
    int n=0;
    while(cad[n] != '\0'){
        n++;
    }
    return n;
}
int main(){
    char *cad1="hola";
    char *cad2="mundo";

    Concatenar_cadena(cad1,cad2);
}
int Concatenar_cadena(char *CAD1, char *CAD2){
    int n1,n2,n3;
    char *T;
    T=CAD1;
    n1=longCadena(CAD1);
    n2=longCadena(CAD2);
    n3=n1+n2;}
    CAD1 = (char *) malloc(n1+1);

    int i;
    CAD1=(char *)realloc(CAD1, n3+1);

    for(i=0; i<=n3;i++){
            CAD1[i]=T[i];
        printf("%c",CAD1[i]);
    }
}

