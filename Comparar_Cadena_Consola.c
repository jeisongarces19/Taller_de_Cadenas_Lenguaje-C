#include <stdio.h>
int CompararCadenas(char* CAD1, char* CAD2){
    int i ;
    i=0;
while(CAD1[i] != '\0'){
    if (CAD1[i] == CAD2[i]){
    i++;
        return 0;
    }
    else if (CAD1[i]<CAD2[i]){
        i++;
        return 1;
    }
    else{
        i++;
        return 2;
        }
    }
}
int main(int argc, char* argv[]){
    char* cadena1=argv[1];
    char* cadena2=argv[2];
    int t=CompararCadena(cadena1,cadena2);
    if (t==0){
    printf("0");
    }
    else if (t==1){
        printf("<0");
    }
    else{
        printf(">0");
    }
    return 1;
}
