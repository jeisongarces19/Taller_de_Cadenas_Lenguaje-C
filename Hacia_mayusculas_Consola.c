#include <stdio.h>
int longCadena(char *cadena ){
	int n = 0;
	while (cadena[n] != '\0'){
		n++;
	}
	return n;
}
char * haciaMayuscula(char* cadena ){
	int i;
	int p=longCadena(cadena);
	char* final =(char*)malloc(p);

	for (i=0; cadena[i] !='\0'; i++){
		if (cadena[i]>= 'a' && cadena[i]<='z'){
			final[i]=cadena[i]-32;
		}else if ( cadena[i] >= 'A' && cadena[i]<= 'Z'){
			final[i]=cadena[i];
		}
	}
	return final;
}
int main(int argc, char* argv[]){
	char* str1= argv[1];
	char* t=haciaMayuscula(str1);
	printf("%s",t);
}
