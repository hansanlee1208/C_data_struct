#include <stdio.h>

int main(){
    int N = 0; // N�� ���μ����� ���ϱ�
    int on = 0;
    printf("������ �ڿ��� N�� �Է��ϼ��� N: ");
    scanf("%d", &N);
    int origin = N;
    for(int i = 2; i<=N; i++){
        if((N % i == 0) && (on == 0)){
            printf("%d ", i);
            on++;
            N /= i;
        } 
        if((N % i == 0) && (on > 0)){
            while(N % i == 0){
                printf("* %d ", i);
                N /= i;
            }
        }
        if(N == 1){
            printf(" = %d", origin);
            break;
        } 
       
    }
    return 0;
}