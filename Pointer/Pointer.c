#include <stdio.h>

int change_val(int *pi){
    printf(" ----- change_val 함수 안에서 ----- \n");
    printf("pi의 값 : %p \n", pi);
    printf("pi가 가리키는 것의 값: %d \n", *pi);

    *pi = 3;
    printf("----- change_val 함수 끝 ~~ -----\n");
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

    // printf("i변수의 주소값: %p \n ", &i);
    // printf("호출 이전의 i 의 값 : %d \n", i);
    // change_val(&i);
    // printf("호출 이후의 i의 값: %d \n", i);
    
    int i , j ;
    i = 3;
    j = 5;
    printf("SWAP 이전: i : %d, j : %d \n", i, j);
    
    swap(i, j);

    printf("SWAP 이후 : i : %d, j : %d \n", i, j);

    printf("SWAP_Real 이전: i : %d, j : %d \n", i, j);
    
    swap_real(&i, &j);

    printf("SWAP_Real 이후 : i : %d, j : %d \n", i, j);

    return 0;
}