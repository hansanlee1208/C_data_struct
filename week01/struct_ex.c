#include <stdio.h>



int main(void){
    
    for(int i = 5; i<7; i++)
    {
        printf("구구단 %d단 시작",i);
        for(int j =1; j<10; j++)
        {
            printf("%d x %d = %d\n", i,j, i*j);
        }
        printf("\n\n");
    }
    return 0;
}