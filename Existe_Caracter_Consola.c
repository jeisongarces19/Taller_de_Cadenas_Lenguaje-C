#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int existeCararacter(char* comienzo, char* car){
	int i=0;
	int n;
	for(i=0;i<strlen(comienzo);i++){
		if(comienzo[i]==car[0]){
			n=1;
			return n;
		}
	}
	n=0;
	return n;
}
int main(int argc, char *argv[]){
	char *cad1=argv[1];
	char *car=argv[2];
	int n;
	n=existeCararacter(cad1,car);
	printf("%d", n);
}
