#include <stdio.h>

int main(){
    int N =0; // N�� ���μ����� ���ϱ�
    printf("������ �ڿ��� N�� �Է��ϼ��� N: ");
    scanf("%d", &N);
    for(int i = 2; i<=N; i++){
        while(N % i == 0){
            N /= i;
            printf("%d * ", i);
        }
    }
    return 0;
}