#include <stdio.h>
#include <math.h>

int main(void){
    
    //1.// for(int i = 5; i<7; i++)
    // {
    //     printf("������ %d�� ����",i);
    //     for(int j =1; j<10; j++)
    //     {
    //         printf("%d x %d = %d\n", i,j, i*j);
    //     }
    //     printf("\n\n");
    // }
    // return 0;

    // 2.//int i;
    // printf("�Է��ϰ� ���� ���� :");
    // scanf("%d", &i);
    // if(i == 7){
    //     printf("����� ����� ���� 7�� �Է��߽��ϴ�.");
    // }

    //3. //int i;
    // for(i = 20; i>0; i-=2){
    //     printf("���� : %d \n", i);  
    //     if(i ==10){
    //         break;
    //     }
    // }
    
    //4.// int i =0;
    // for(int ai=1; ai<=10000; ai++){
    //     i += ai;
    // }
    // printf("1���� 10000 ������ �� : %d ", i);
    // return 0;

    // //5.
    // int subject_num;
    // int score_subject;
    // int total_score =0;
    // float avg_score;

    // printf("��� ���� ������ �Է� ���� ���ΰ���? ");
    // scanf("%d", &subject_num);

    // printf("�� ������ ������ �Է��� �ּ���.\n");
    // for(int i = 1; i<= subject_num;i++){
    //     printf("���� %d : ",i);
    //     scanf("%d", &score_subject);
    //     total_score += score_subject;
    // }
    // avg_score = total_score / subject_num;
    // printf("��ü ������ ����� : %.2f", avg_score);
    
    // return 0;

    // //6. %f�� float %lf�� double(long float)
    // double pi = 3.141592;

    // printf("�ø� : %lf\n", ceil(pi));
    // printf("���� : %lf\n", floor(pi));
    // printf("�ݿø� : %lf\n", round(pi)); 

    //6.
    // int num;
    // printf("��ǻ�Ͱ� ������ ���ڸ� ���߾� ������!\n");
    // for(;;){
    //     scanf("%d", &num);
    //     if(num == 3){
    //         printf("����! \n");
    //         break;
    //     } else{
    //         printf("Ʋ�Ⱦ�� ! \n");
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