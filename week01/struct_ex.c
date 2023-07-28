#include <stdio.h>

typedef struct _score
{
    int scoreKOR;
    int scoreMAT;
    int scoreENG;
    int scoreSCI;

};



int main(void){
    struct score a;
    struct score *p;
    p = &a;
    p->scoreENG = 100;
    
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