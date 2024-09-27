#include<stdio.h>

void mostra_vetor(int v[], int n){
    for (int i = 0; i < n; i++)
       printf("%d", v[i]);
    printf("\n");
}

void mostra_binario(int n, int i, int bin[]){
    if (i == n){
        mostra_vetor(bin, n);
        return;
    }
    bin[i] = 0;
    mostra_binario(n, i+1, bin);
    bin[i] = 1;
    mostra_binario(n, i+1, bin);
}

int main(){
    int n;
    int bin[100];
    
    printf("Digite n: ");
    scanf("%d", &n);
    mostra_binario(n, 0, bin);
}