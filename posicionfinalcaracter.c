#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int posFin(char *comienzo, char *car){
	int i=0;
	int n=strlen(comienzo);
	int posicion=0;
	for(i=0;i<n;i++){
		if(comienzo[n]==car[0]){
			posicion=i+1;
			n--;
			return posicion;
		}
	}
}
int main(int argc, char *argv[]){
	char *cad1=argv[1];
	char *car=argv[2];
	int posicion;
	posicion=posFin(cad1,car);
	printf("%d", posicion);
}
