#include <stdio.h>
// 문제 3 (난이도 : 下)
// 1000 이하의 3 또는 5 의 배수인 자연수들의 합을 구한다.

int main(){
    //3의 배수 , 5의 배수,  3,5의 공배수
    int total_num=0;
    int multi_3 =0;
    int multi_5 =0;
    int multi_15=0;

    for(int i = 1; i<= 1000; i++){
        // if(i%3 ==0)multi_3 += i;
        // if(i%5 == 0) multi_5 += i;
        // if( i%15 == 0)multi_15 +=i;
        
        
        if((i % 3 == 0) ||(i%5 == 0)){ 
            total_num += i;
        }
    }
    printf("3또는 5의 배수인 자연수들의 합: %d,%d,%d,%d,%d", multi_3, multi_5, multi_15, total_num,multi_3 + multi_5 -multi_15);
}