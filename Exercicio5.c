#include <stdio.h>

#include <string.h>


// Função para inverter uma string usando ponteiros

void inverter_string(char *str) {

// TODO: Implemente usando dois ponteiros

// Um no início e outro no fim da string

char *inicio = str;
char *fim = str + strlen(str) - 1;



    while (inicio < fim){
            char temp = *inicio;
            *inicio = *fim;
            *fim = temp;

            inicio++;
            fim--;


    }
}

int main() {

char texto[] = "PONTEIROS";


printf("String original: %s\n", texto);

inverter_string(texto);

printf("String invertida: %s\n", texto);


return 0;

}