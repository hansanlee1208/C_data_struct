#include <stdio.h>
// ���� 3 (���̵� : ��)
// 1000 ������ 3 �Ǵ� 5 �� ����� �ڿ������� ���� ���Ѵ�.

int main(){
    //3�� ��� , 5�� ���,  3,5�� �����
    int total_num=0;
    int multi_3 =0;
    int multi_5 =0;
    int multi_15=0;

    for(int i = 1; i<= 1000; i++){
        // if(i%3 ==0)multi_3 += i;
        // if(i%5 == 0) multi_5 += i;
        // if( i%15 == 0)multi_15 +=i;
        
        
        if((i % 3 == 0) ||(i%5 == 0)){ 
            total_num += i;
        }
    }
    printf("3�Ǵ� 5�� ����� �ڿ������� ��: %d,%d,%d,%d,%d", multi_3, multi_5, multi_15, total_num,multi_3 + multi_5 -multi_15);
}