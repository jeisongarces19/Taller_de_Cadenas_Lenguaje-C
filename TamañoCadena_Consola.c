#include <stdio.h>

int longCadena (char *cad) {
  int n=0;
  while (n != '\0')
    n++;
 return n;

}

int main (int argc, char *argv []) {
  char *cadEntrada = argv [1];
  int n = longCadena (cadEntrada);
  printf ("\n %d \n", n);
  return 0;

}