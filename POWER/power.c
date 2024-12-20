#include "stdio.h"
#include <stdlib.h>
int main() { 
  system("chcp 65001 > nul");  
  int a, b, pow = 1;

  printf("Digite o primeiro número: ");  
  scanf("%d", &a);
  printf("Digite o segundo número: ");  
  scanf("%d", &b);

  for (int i = 1; i <=b; i++)
  {
    pow = pow * a;
  }

  
  printf("O resultado de %d elevado a %d é: %d\n", a, b, pow);
  
  return 0;
}
