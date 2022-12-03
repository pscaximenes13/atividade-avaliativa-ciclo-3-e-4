//algoritmo Insertion sort

#include <math.h>
#include <stdio.h>

void insertionSort(int arr[], int size){
    int i, j, key;
    for (i = 1; i < size; i++) {              //Valor inícial do vetor sendo 1, com novo valor +1 sendo acrescentado 
        key = arr[i];                        //Recebe o valor de i, que nesse cenário seria 1    
        j = i - 1;                          //j por sua vez recebe 0
        while (j >= 0 && arr[j] > key) {   // é testda a condinção de j, ele valendo 0 é maior ou igual a 0, portanto essa condição é verdadeira 
            arr[j + 1] = arr[j];          // recebe o valor da posição 0
            j = j - 1;                   //como aqui é número negativo não exucuta while e executa o código abaixo dele
        }
        arr[j + 1] = key;               // o valor key é alocado em 0 que estão ordenadas em direceção uma da outra
    }
}

void printArray(int arr[], int size){     
    int i;
    for (i = 0; i < size; i++)      //valor inícial do vetor sendo 0, com novo valor +1 sendo acrescentado 
        printf("%d ", arr[i]);     //mostra a saída dos valores
    printf("\n");
}

void main(){
    int arr[] = { 12, 11, 13, 5, 6 };
    int size = sizeof(arr) / sizeof(arr[0]);    //dividindo esses operadores da para saber a posição que vai ser ocupada
    insertionSort(arr, size);
    printArray(arr, size);
}