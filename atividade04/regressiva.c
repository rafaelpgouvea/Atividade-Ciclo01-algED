#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");

  int num;
  printf("Insira um número inteiro positivo: ");
  scanf("%d", &num);
  while (num >= 0){
    printf("%d\n", num);
    num--;
  }
  
  return 0;
}