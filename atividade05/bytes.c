#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "portuguese");

  struct{
  char name[50], email[50], tel[15];
  }dados;
  int digName = 0, digEmail = 0, digTel = 0;
  printf("Digite um nome: ");
  scanf("%s", dados.name);
  printf("Digite um e-mail: ");
  scanf("%s", dados.email);
  printf("Digite um telefone: ");
  scanf("%s", dados.tel);
  printf("----------------------------------------------------\n");
  while (dados.name[digName] != '\0'){
    digName++;
  }
  printf("Nome: %d dígitos\n", digName);
  while (dados.email[digEmail] != '\0'){
    digEmail++;
  }
  printf("E-mail: %d dígitos\n", digEmail);
  while (dados.tel[digTel] != '\0'){
    digTel++;
  }
  printf("Telefone: %d dígitos\n", digTel);

  return 0;
}