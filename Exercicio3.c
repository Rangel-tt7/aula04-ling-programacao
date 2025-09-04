#include <stdio.h>


// TODO: Implemente esta função usando apenas ponteiros

int encontrar_maior(int *array, int tamanho) {

    int *p = array;
    int *maior = array;

    for(int i= 1;i < tamanho; i++){
        p++;
        if (*p > *maior) {
            maior = p;
        }
    }
    return *maior;
    }


int main() {

int numeros[] = {45, 23, 78, 12, 67, 34, 89, 56};

int tamanho = sizeof(numeros) / sizeof(numeros[0]);


int maior = encontrar_maior(numeros, tamanho);


printf("Array: ");

for(int i = 0; i < tamanho; i++) {

printf("%d ", numeros[i]);

}

printf("\nMaior elemento: %d\n", maior);


return 0;
}