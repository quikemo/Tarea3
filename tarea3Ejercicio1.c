#include<stdio.h>

int main() {
    int option = 0;
    int numero1 = 0;
    int numero2 = 0;
    int suma = 0;
    int * puntero1;
    int * puntero2;
    do {
        printf("Menu seleccione una opcion ingresando el numero de la opcion\n");
        printf("1 - Ingresar dos Numeros enteros.\n");
        printf("2 - Calcular la suma\n");
        printf("3 - Calcular la resta\n");
        printf("4 - Ver la Direccion de memoria de cada numero entero\n");
        scanf("%d", &option);
        switch (option) {
            case 1:
                printf("Selecciono la opcion 1\n");
                printf("Ingrese el valor del primer numero\n");
                scanf("%d",&numero1);
                printf("Ingrese el valor del segundo numero\n");
                scanf("%d",&numero2);
                printf("Se han ingresado correctamente los valores\n");
                break;
            case 2:
                if(numero1 == 0 && numero2 == 0){
                printf("Para seleccionar esta opcion debe ingresar primero los numeros a sumar en la opcion 1\n");
                }else{
                printf("Selecciono la opcion 2\n");
                puntero1 = &numero1;
                puntero2 = &numero2;
                suma = *puntero1 + *puntero2;
                printf("La suma de los numeros %d y %d es: %d\n",*puntero1,*puntero2,suma);
                }
                break;
            case 3:
                if(numero1 == 0 && numero2 == 0){
                printf("Para seleccionar esta opcion debe ingresar primero los numeros a sumar en la opcion 1\n");
                }else{
                printf("Selecciono la opcion 3\n");
                puntero1 = &numero1;
                puntero2 = &numero2;
                suma = *puntero1 - *puntero2;
                printf("La resta de los numeros %d y %d es: %d\n",*puntero1,*puntero2,suma);
                }
                break;
            case 4:
                printf("Selecciono la opcion 4 ver direcciones de memoria\n");
                printf("La direccion de memoria del primer valor es: %p\n",&puntero1);
                printf("La direccion de memoria del segundo valor es: %p\n",&puntero2);
                break;
        }

    } while (option > 0 && option < 5);
}