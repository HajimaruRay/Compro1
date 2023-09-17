#include<stdio.h>
int main(){
    int j,i,N;
    scanf("%d",&N);
    for (i=0; i<N; i++){
        for (j=0; j<N; j++){
            if (j>=-i+N/2 && j<=i+N/2 && j>=i-N/2 && j<=-i+N+N/2-1){
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
}
