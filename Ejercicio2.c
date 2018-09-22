#include <stdio.h>
#define tamano 5
int main () {
    int vector1[tamano] = {1,4,7,2,8};
    int vector2[tamano] = {2,8,3,5,4};
    int temp;
    int *puntero1;
    int *puntero2;
    printf("El vector 1 es\n");
    for(int i = 0; i< tamano; i++){
        printf("[%d] ",vector1[i]);
    }
    printf("\n");
    printf("El vector 2 es\n");
    for(int i = 0; i< tamano; i++){
        printf("[%d] ",vector2[i]);
    }
    printf("\n");
    for(int i = 0; i<tamano;i++){
        puntero1 = &vector1[i];
        puntero2 = &vector2[i];
        temp = *puntero1;
        vector1[i] = *puntero2;
        vector2[i] = temp;
    }
    
    printf("Se hizo el cambio\n\n");
    printf("Ahora el vector 1 es:\n");
    for(int i = 0; i< tamano; i++){
        printf("[%d] ",vector1[i]);
    }
    printf("\n");
    printf("Ahora el vector 2 es:\n");
    for(int i = 0; i< tamano; i++){
        printf("[%d] ",vector2[i]);
    }
    printf("\n");
}