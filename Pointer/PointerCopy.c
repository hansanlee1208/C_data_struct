#include <stdio.h>
// �迭 a�� �迭 b�� ���� �� int a[5] int b[7] a�� 5���� b�� ������ �迭�� ���
int main(){
    int a[5] = {4, 7, 9, 3, 6};
    int b[7] = {10, 20, 30, 40, 50, 60, 70};

    int* pa = a;
    int* pb = b;

    printf("<�����͸� ������� ���� �迭 ���� ���>\n");
    for(int i = 0; i< sizeof a / sizeof(a[0]); i++){
        *(pb+i) = *(pa+i);
    }
    for(int i = 0; i< sizeof b / sizeof(b[0]); i++){
        printf("%d ", *(pb+i));
    }
    printf("\n\n<�����͸� ����� �迭 ���� ���>\n");
    for(int i = 0; i< sizeof a/ sizeof(a[0]); i++){
        b[i] = a[i];
    }
    for(int i = 0; i< sizeof b / sizeof(b[0]); i++){
        printf("%d ", b[i]);
    }
    return 0;
}