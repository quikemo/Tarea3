#include<stdio.h>
#define tamano 5
int main(){
    int vector1[tamano] = {1,2,3,4,5};
    int *puntero;
    printf("El vector normal es: \n");
    for(int i=0; i<tamano; i++){
        printf("[%d] ",vector1[i]);
    }
    printf("\n");
    printf("El vector en reversa es: \n");
    for(int i=0; i<tamano;i++){
        puntero = &vector1[tamano-(i+1)];
        
        printf("[%d] ",*puntero);
    }
    printf("\n");
}
