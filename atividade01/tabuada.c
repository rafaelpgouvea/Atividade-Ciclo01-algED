#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void tab(int x, int y){
  for (y; y <= 10; y++){
    printf("%d x %d = %d\n", x, y, x*y);
  }
}

int main(){
  setlocale(LC_ALL, "portuguese");

  int num=0, fat=1;
  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &num);
  for (num; num > 0; num--){
    printf("-------------\n");
    tab(num, fat);
  }

  return 0;
}