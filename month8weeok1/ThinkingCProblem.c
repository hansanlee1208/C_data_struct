#include <stdio.h>

// N 줄인 삼각형을 출력한다. 사용자로 부터 임의의 N 을 입력 받는다.
int main(){
    int num_star;
    printf("몇줄의 삼각형을 별찍기 할래? : ");
    scanf("%d", &num_star);

    for(int i = 1; i <= num_star; i++){
        for(int k = 1; k <= 2*num_star +1; k++){
            if((k > num_star-i) &&( k< num_star +i)){
                printf("*");
            } else{
                printf(" ");
            }      
        }
        printf("\n");
    }
    return 0;
}
