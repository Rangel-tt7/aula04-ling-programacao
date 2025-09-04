#include <stdio.h>


// Função para calcular estatísticas de um array de notas

void calcular_estatisticas(float *notas, int qtd_notas,

float *media, float *maior, float *menor) {

    float *p = notas;
     *maior = *notas;
     *menor = *notas;
    float soma = 0;

    for(int i= 0;i < qtd_notas; i++){
        if (*p > *maior) {
            *maior = *p;
        }
        if (*p < *menor){
            *menor = *p;
        }
        p++;
        soma+= *p;
    }
    *media = soma /qtd_notas;
    }

// TODO: Implemente esta função

// Calcule média, maior e menor nota usando ponteiros



int main() {

float notas[] = {8.5, 7.2, 9.1, 6.8, 8.9, 7.7, 9.5, 8.2};

int qtd_notas = sizeof(notas) / sizeof(notas[0]);

float media, maior, menor;


calcular_estatisticas(notas, qtd_notas, &media, &maior, &menor);


printf("=== RELATÓRIO DE NOTAS ===\n");

printf("Notas: ");

for(int i = 0; i < qtd_notas; i++) {

printf("%.1f ", notas[i]);

}

printf("\n");

printf("Média: %.2f\n", media);

printf("Maior nota: %.2f\n", maior);

printf("Menor nota: %.2f\n", menor);


return 0;

}