#include <stdio.h>
#include <math.h>

int main(){

  int expoente;
  printf("Potências de 3 de 0 a 7:\n");

  for(expoente = 0; expoente <= 7; expoente++){
    double resultado = pow(3, expoente);
    printf("3^%d = %.0lf\n", expoente, resultado);
  
  }

return 0;
}
