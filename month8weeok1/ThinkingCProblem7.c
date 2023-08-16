#include <stdio.h>

int main(){
    int N = 0; // N의 소인수분해 구하기
    int on = 0;
    printf("임의의 자연수 N을 입력하세요 N: ");
    scanf("%d", &N);
    int origin = N;
    for(int i = 2; i<=N; i++){
        if((N % i == 0) && (on == 0)){
            printf("%d ", i);
            on++;
            N /= i;
        } 
        if((N % i == 0) && (on > 0)){
            while(N % i == 0){
                printf("* %d ", i);
                N /= i;
            }
        }
        if(N == 1){
            printf(" = %d", origin);
            break;
        } 
       
    }
    return 0;
}