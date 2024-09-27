#include<stdio.h>


void mostra_seq(int golsA, int golsB, char placar[], int i){
    if ( golsA + golsB == 0){
        placar[i] = 0;
        printf("%s\n", placar);
        return;
    }

    if (golsA > 0){
        placar[i] = 'A';
        mostra_seq(golsA-1, golsB, placar, i+1);
    }

    if(golsB > 0){
        placar[i] = 'B';
        mostra_seq(golsA, golsB-1, placar, i+1);
    }
}

int main(){
    int golsA, golsB;
    char placar[100];
    printf("Digite o número de gols do time A:");
    scanf("%d", &golsA);
    printf("Digite o número de gols do time B:");
    scanf("%d", &golsB);
    mostra_seq(golsA, golsB, placar, 0);

}