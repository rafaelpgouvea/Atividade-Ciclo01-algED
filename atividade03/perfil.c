#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");

  int dia, mes, ano, x, y;
  printf("Insira sua data de nascimento (formato de data): ");
  scanf("%d %d %d", &dia, &mes, &ano);
  x = dia*100+mes;
  y = x + ano;
  x = y%100;
  y = (y-x)/100;
  x += y;
  x = x%5;
  switch (x){
  case 0:
    printf("O seu perfil é Tímido");
    break;
  case 1:
    printf("O seu perfil é Sonhador");
    break;
  case 2:
    printf("O seu perfil é Paquerador");
    break;
  case 3:
    printf("O seu perfil é Atraente");
    break;
  case 4:
    printf("O seu perfil é Irresistível");
    break;
  }
  
  return 0;
}