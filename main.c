#include <stdio.h>
int quantidade(int *ptr){
    int quant;
    printf("Escreve o tamanho do vetor: \n");
    scanf("%d",&quant);
    ptr=(int *)(malloc(quant*sizeof(int)));
    for(int i=0; i<quant; i++){
        ptr[i] = 0;
    }
    for(int i=0; i<quant; i++){
        printf("\n%i", *ptr+i);
    }
    if(ptr==NULL){
        printf("Erro na alocacao da memoria \n");
        system("pause");
    }
    free(ptr);
    return quant;
}
//codigo transforma uma variavel em vetor
int main(){
    int n, m;
    m = quantidade(&n);
    for(int i=0; i<m; i++){
        printf("\n%d", n+i);
    }
}
