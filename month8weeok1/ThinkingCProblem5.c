#include <stdio.h>

int main(){
    int N =0;
    int ans = 1;
    printf("N�� �Է��غ����� 1~N������ ���� ������ٰԿ�. \n");
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        ans *=i;
    }
    printf("Answer is : %d" , ans);
}