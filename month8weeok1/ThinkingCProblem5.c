#include <stdio.h>

int main(){
    int N =0;
    int ans = 1;
    printf("N을 입력해보세요 1~N까지의 곱을 출력해줄게요. \n");
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        ans *=i;
    }
    printf("Answer is : %d" , ans);
}