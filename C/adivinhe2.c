/*

adivinhe o número

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_secreto, palpite;

    srand(time(NULL)); // inicializa gerador aleatório
    numero_secreto = rand() % 10 + 1; // número entre 1 e 10

    do {
        printf("Adivinhe o número (1 a 10): ");
        scanf("%d", &palpite);

        if (palpite < numero_secreto)
            printf("Muito baixo!\n");
        else if (palpite > numero_secreto)
            printf("Muito alto!\n");

    } while (palpite != numero_secreto); // enquanto o palpite for diferente do número certo, ele repete tudo do bloco do

    printf("Parabéns! Você acertou!\n"); // fora do bloco caso tenha aceitado

    return 0;
}
