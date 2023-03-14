#include<stdio.h>

void permutacao(int v[], int n, int w[], int k, int usado[]){
    if (n == k){
        for(int i = 0; i < k; i++)
            printf("%d ", w[i]);
        printf("\n");    
    } else {
        for (int i = 0; i < n; i++){
            if (!usado[i]){
                usado[i] = 1;
                w[k] = v[i];
                permutacao(v, n, w, k+1, usado);
                usado[i] = 0;
            }
        }
    }
}

int main(){
    int v[3] = {1,2,3};
    int w[3] = {0,0,0};
    int usado[3] = {0,0,0};
    permutacao(v, 3, w, 0, usado);
}
