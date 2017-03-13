#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* asignarCad(char* comienzo, char* caracter){

	int i=0;
	char *destino;
	destino=(char *)malloc(strlen(comienzo)+1);
	for(i=0;i<strlen(comienzo);i++){
		destino[i]=caracter[0];
	}
	printf("%s\n",destino);
}
void main(int argc, char *argv[]){
	char *cad1=argv[1];
	char *caracter=argv[2];
	asignarCad(cad1,caracter);

}
