#include <stdio.h>



int main(void){
    
    // for(int i = 5; i<7; i++)
    // {
    //     printf("������ %d�� ����",i);
    //     for(int j =1; j<10; j++)
    //     {
    //         printf("%d x %d = %d\n", i,j, i*j);
    //     }
    //     printf("\n\n");
    // }
    // return 0;
    // int i;
    // printf("�Է��ϰ� ���� ���� :");
    // scanf("%d", &i);

    // if(i == 7){
    //     printf("����� ����� ���� 7�� �Է��߽��ϴ�.");
    // }
    // int i;
    // for(i = 20; i>0; i-=2){
    //     printf("���� : %d \n", i);  
    //     if(i ==10){
    //         break;
    //     }

    // }
    int i =0;
    for(int ai=1; ai<=10000; ai++){
        i += ai;
    }
    printf("1���� 10000 ������ �� : %d ", i);
    return 0;
}