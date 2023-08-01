#include <stdio.h>
// 문제 2. 거꾸로 삼각형 별찍기
int main(){
    int star_num;
    printf("거꾸로 삼각형 별찍기 몇개를 하겠어요? : ");
    scanf("%d", &star_num);

    for(int i= star_num; i>= 1; i--){
        for(int k =1; k<=star_num*2 -1 ; k++){
            if((k > star_num-i) && (k< star_num +i)){
                printf("*");
            } else{
                printf(" ");
            }
        }
        printf("\n");
    }
}