#include<stdio.h>

int main(){
    int N, M, flag;
    scanf("%d", &N);
    scanf("%d", &M);
    
    flag = 0;
    if (N%2 != 0){
        N = (N-1)/2;
        flag = 1;
        
    }
    else{
        N = N/2;
    }
    
    int m[N][M];
    int N1 = N;
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            m[i][j] = N1;
            printf("%d ", m[i][j]);
        }
        N1 = N1-1;
        printf("\n");
    }
    
    if (flag == 1){
        N = N +1;
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<M;j++){
            m[i][j] = 0;
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    
    return 0;
    
    
    
}
