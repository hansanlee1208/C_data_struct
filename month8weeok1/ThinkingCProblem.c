#include <stdio.h>

// N ���� �ﰢ���� ����Ѵ�. ����ڷ� ���� ������ N �� �Է� �޴´�.
int main(){
    int num_star;
    printf("������ �ﰢ���� ����� �ҷ�? : ");
    scanf("%d", &num_star);

    for(int i = 1; i <= num_star; i++){
        for(int k = 1; k <= 2*num_star +1; k++){
            if((k > num_star-i) &&( k< num_star +i)){
                printf("*");
            } else{
                printf(" ");
            }      
        }
        printf("\n");
    }
    return 0;
}
