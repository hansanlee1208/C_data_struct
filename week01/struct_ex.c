#include <stdio.h>



int main(void){
    
    // for(int i = 5; i<7; i++)
    // {
    //     printf("구구단 %d단 시작",i);
    //     for(int j =1; j<10; j++)
    //     {
    //         printf("%d x %d = %d\n", i,j, i*j);
    //     }
    //     printf("\n\n");
    // }
    // return 0;
    // int i;
    // printf("입력하고 싶은 숫자 :");
    // scanf("%d", &i);

    // if(i == 7){
    //     printf("당신은 행운의 숫자 7을 입력했습니다.");
    // }
    // int i;
    // for(i = 20; i>0; i-=2){
    //     printf("숫자 : %d \n", i);  
    //     if(i ==10){
    //         break;
    //     }

    // }
    int i =0;
    for(int ai=1; ai<=10000; ai++){
        i += ai;
    }
    printf("1부터 10000 까지의 합 : %d ", i);
    return 0;
}