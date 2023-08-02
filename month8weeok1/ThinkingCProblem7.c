#include <stdio.h>

int main(){
    int N =0; // N의 소인수분해 구하기
    printf("임의의 자연수 N을 입력하세요 N: ");
    scanf("%d", &N);
    for(int i = 2; i<=N; i++){
        while(N % i == 0){
            N /= i;
            printf("%d * ", i);
        }
    }
    return 0;
}