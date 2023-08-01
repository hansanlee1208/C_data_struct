#include <stdio.h>

int main(){
    int num_1 = 1;
    int num_2 = 1;
    int num_3 = 0;
    int sum_even =0;
    do{
        num_3 = num_1 + num_2;
        if(num_3 % 2 == 0) sum_even += num_3;
        num_1 = num_2;
        num_2 = num_3;
        
    }while(num_3 <= 1000000);

    printf("%d", sum_even);
    return 0;
}