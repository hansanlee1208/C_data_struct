#include <stdio.h>

int change_val(int *pi){
    printf(" ----- change_val �Լ� �ȿ��� ----- \n");
    printf("pi�� �� : %p \n", pi);
    printf("pi�� ����Ű�� ���� ��: %d \n", *pi);

    *pi = 3;
    printf("----- change_val �Լ� �� ~~ -----\n");
    return 0;
}

int swap(int a, int b){
    int temp = a;

    a = b;
    b = temp;

    return 0;
}
int swap_real(int *a, int *b){
    int temp = *a;

    *a = *b;
    *b = temp;

    return 0;
}

int main(){
    // int i = 0;

    // printf("i������ �ּҰ�: %p \n ", &i);
    // printf("ȣ�� ������ i �� �� : %d \n", i);
    // change_val(&i);
    // printf("ȣ�� ������ i�� ��: %d \n", i);
    
    int i , j ;
    i = 3;
    j = 5;
    printf("SWAP ����: i : %d, j : %d \n", i, j);
    
    swap(i, j);

    printf("SWAP ���� : i : %d, j : %d \n", i, j);

    printf("SWAP_Real ����: i : %d, j : %d \n", i, j);
    
    swap_real(&i, &j);

    printf("SWAP_Real ���� : i : %d, j : %d \n", i, j);

    return 0;
}