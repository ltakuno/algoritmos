#include<stdio.h>

void combination_sum(int v[], int n, int total, int resultado[], int m, int k) { 
    if (total == 0){
        for(int k = 0; k < m; k++)
            printf("%d ", resultado[k]);
        printf("\n");   
        return;
    } 
    
    for (int i = k; i < n; i++){
        if (total-v[i] >= 0){
            resultado[m] = v[i];
            combination_sum(v, n, total-v[i], resultado, m+1, i);
        }
    }
}

int main(){
    int v[4] = {2,3,6,7};
    int resultado[100] = {0};
    int total = 7;
    combination_sum(v, 4, total, resultado, 0, 0);
}
