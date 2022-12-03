//algoritmo Bubble sort

#include <stdio.h>
int main()
{
    int data[100],i,n,step,temp;
    printf("Digite o número de elementos que deseja ordenar: ");  // a qauntidade de elementos que a lista vai ter 
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
        printf("%d. Insira o elemento aqui:",i+1);   // quais elementos vai querer que tenha
        scanf("%d",&data[i]);
    }
    for(step=0;step<n-1;++step)   
    for(i=0;i<n-step-1;++i)
    {
        if(data[i]>data[i+1])   // se a condição for verdadeira, os elementos vão ser trocados e o loop passa para o proximo quando todos itens são commparados 
        {                       // para trocar se é ordem crescente ou descrescente somente mudar os sinais <>
            temp=data[i];     
            data[i]=data[i+1];  //itens são comparados 
            data[i+1]=temp;
        }
    }
    printf("Em ordem crescente:");
    for(i=0;i<n;++i)
         printf("%d  ",data[i]); //saída final, imprimindo todos os itens na ordem que era pedido
    return 0;
}
