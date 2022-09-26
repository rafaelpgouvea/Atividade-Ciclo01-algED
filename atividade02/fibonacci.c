#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");

  int num=0, x=1, y=1, r=0;
  printf("Digite um número >=3: ");
  scanf("%d", &num);
  printf("1,1");
  num -= 2;
  for ( num; num > 0; num--){
    r = x + y;
    x = y;
    y = r;
    printf(",%d", r);
  }
  
  return 0;
}