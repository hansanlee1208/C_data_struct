#include <stdio.h>
// ���� 2. �Ųٷ� �ﰢ�� �����
int main(){
    int star_num;
    printf("�Ųٷ� �ﰢ�� ����� ��� �ϰھ��? : ");
    scanf("%d", &star_num);

    for(int i= star_num; i>= 1; i--){
        for(int k =1; k<=star_num*2 -1 ; k++){
            if((k > star_num-i) && (k< star_num +i)){
                printf("*");
            } else{
                printf(" ");
            }
        }
        printf("\n");
    }
}