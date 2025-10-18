#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// **************************************************************************
int *numbers_create(int size); // aloca os espaços para um tamanho fixo
void numbers_read(int *number ,int size); // ler todos os valores para os espaços
float numbers_average(int *numbers,int size);  // calcula a média e retorna o valor
void numbers_show(int *numbers, int size); // exibe os valores alocados
void numbers_destroy(int *numbers);        // desaloca a variável alocada

// **************************** Novas funcionalidades ******************************
int numbers_maior(int *numbers, int size); //encontra o maior número do conjunto de dados
int numbers_menor(int *numbers, int size); //encontra o menor número do conjunto de dados 
void numbers_par(int *numbers, int size); //exibir os números pares do conjunto
void numbers_impar(int *numbers, int size); //exibir os números ímpare
void numbers_repeti(int *numbers, int size); //exibir os números que foram repetidos (funcionalidade criativa)
// **************************** Implementação ******************************


int *numbers_create(int size) {
  int *num = NULL;
  num = (int *)malloc(size * sizeof(int));
  if (num == NULL)
    return NULL;
  return num;
}

void numbers_read(int *numbers, int size) {
  if (numbers != NULL) {
    for (int i = 0; i < size; i++)
      numbers[i] = rand() % 50;
  }
}

float numbers_average(int *numbers, int size) {
  float sum = 0.0;
  if (numbers != NULL)
    for (int i = 0; i < size; i++)
      sum += numbers[i];
  if (sum != 0)
    return sum / (float)size;
  return 0;
}

void numbers_show(int *numbers, int size) {
  printf("[");
  if (numbers != NULL) {
    for (int i = 0; i < size; i++)
      if (i == (size - 1))
        printf("%d", numbers[i]);
      else
        printf("%d, ", numbers[i]);
  }
  printf("]\n");
}

// **************************** Implementação das novas funções ******************************
//Buscando o maior número
int numbers_maior(int *numbers, int size){
  if(numbers != NULL){
    int maior = numbers[0];
    for(int i =0; i < size; i++){
      if(numbers[i] > maior){
        maior = numbers[i];
      }
    }
    return maior;
    }
}
// Buscando o menor número
int numbers_menor(int *numbers, int size){
  if(numbers != NULL){
    int menor = numbers[0];
    for(int i =0; i < size; i++){
      if(numbers[i] < menor){
        menor = numbers[i];
      }
    }
    return menor;
    }
}
//exibir os números pares do conjunto
  void numbers_par(int *numbers, int size){
    printf("Os numeros pares sao: ");
    if(numbers !=NULL){
      for(int i=0; i<size; i++)
        if(numbers[i] % 2 ==0){
          if(i == size - 1)
          printf("%d",numbers[i]);
          else
          printf("%d,",numbers[i]);
        }
    }
  } 
//exibir os números impares do conjunto
  void numbers_impar(int *numbers, int size){
    printf("\nOs numeros impares sao: ");
    if(numbers !=NULL){
      for(int i=0; i<size; i++)
        if(numbers[i] % 2 !=0){
          if(i == size - 1)
          printf("%d",numbers[i]);
          else
          printf("%d,",numbers[i]);
        }
    }
  }  

  void numbers_repeti(int *numbers, int size){
    if(numbers != NULL){
      printf("\nOs numeros repetidos sao: ");
      for(int i =0; i < size; i++){
        int duplicado=0;
        //impedi duplicidade na hora de imprimir 
        for(int dupli = 0; dupli < i; dupli++){
          if(numbers[i] == numbers[dupli]){
            duplicado = 1;
            break;
          }
        }
        if(duplicado) continue;
        int cont =0;
        for(int j =0; j < size; j++){
          if(numbers[i] == numbers[j])
           cont ++;
        }
        if(cont > 1){
          printf("%d,",numbers[i]);
        }
      }

    }
  }
// *************************************************************************
void numbers_destroy(int *numbers) { free(numbers); }

// *************************************************************************

int main() {
  srand(time(NULL));
  int *numbers; 
  int size=rand() % 100; 
  numbers = numbers_create(size);
  numbers_read(numbers, size);
  float avg = numbers_average(numbers, size); 
  numbers_show (numbers,size);
  printf("Media = %.2f\n", avg);
  //Novas implementações
  int maiorNumero = numbers_maior(numbers, size);  
  printf("O maior numero e %d\n",maiorNumero);
  int menorNumero = numbers_menor(numbers, size);  
  printf("O menor numero e %d\n",menorNumero);
  numbers_par(numbers,size);
  numbers_impar(numbers,size);
  numbers_repeti(numbers, size);
  //------------------------
  numbers_destroy(numbers);
  return 0;
}