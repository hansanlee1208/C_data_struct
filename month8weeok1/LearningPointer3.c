#include <stdio.h>

int main(){
    int arr[10] = {100, 98, 97, 95,78, 34, 99, 85, 86,86 };

    int* parr = arr;
    int sum = 0;

    while(parr - arr <= 9){
        printf("%d   %d  %d  %d\n", parr,arr, sum, parr-arr);

        sum += (*parr);
        parr++;
    }
    printf("내 시험 점수 평균 : %d \n", sum /10);
    return 0;
}