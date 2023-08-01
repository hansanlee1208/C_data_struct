#include <stdio.h>
#include <math.h>

int main(void){
    
    //1.// for(int i = 5; i<7; i++)
    // {
    //     printf("구구단 %d단 시작",i);
    //     for(int j =1; j<10; j++)
    //     {
    //         printf("%d x %d = %d\n", i,j, i*j);
    //     }
    //     printf("\n\n");
    // }
    // return 0;

    // 2.//int i;
    // printf("입력하고 싶은 숫자 :");
    // scanf("%d", &i);
    // if(i == 7){
    //     printf("당신은 행운의 숫자 7을 입력했습니다.");
    // }

    //3. //int i;
    // for(i = 20; i>0; i-=2){
    //     printf("숫자 : %d \n", i);  
    //     if(i ==10){
    //         break;
    //     }
    // }
    
    //4.// int i =0;
    // for(int ai=1; ai<=10000; ai++){
    //     i += ai;
    // }
    // printf("1부터 10000 까지의 합 : %d ", i);
    // return 0;

    // //5.
    // int subject_num;
    // int score_subject;
    // int total_score =0;
    // float avg_score;

    // printf("몇개의 과목 점수를 입력 받을 것인가요? ");
    // scanf("%d", &subject_num);

    // printf("각 과목의 점수를 입력해 주세요.\n");
    // for(int i = 1; i<= subject_num;i++){
    //     printf("과목 %d : ",i);
    //     scanf("%d", &score_subject);
    //     total_score += score_subject;
    // }
    // avg_score = total_score / subject_num;
    // printf("전체 과목의 평균은 : %.2f", avg_score);
    
    // return 0;

    // //6. %f는 float %lf는 double(long float)
    // double pi = 3.141592;

    // printf("올림 : %lf\n", ceil(pi));
    // printf("내림 : %lf\n", floor(pi));
    // printf("반올림 : %lf\n", round(pi)); 

    //6.
    // int num;
    // printf("컴퓨터가 생각한 숫자를 맞추어 보세요!\n");
    // for(;;){
    //     scanf("%d", &num);
    //     if(num == 3){
    //         printf("정답! \n");
    //         break;
    //     } else{
    //         printf("틀렸어요 ! \n");
    //     }
    // }
    int a = 5 , b =6 ;
    printf("a : %d ,  b : %d " , a,b);

    swap(&a, &b);
    printf("a : %d ,  b : %d " , a,b);

}
void swap(int *a, int *b){
    int l ;
    l = *a;
    *a = *b;
    *b = l;
}