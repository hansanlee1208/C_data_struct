#include <stdio.h>
// 배열 a와 배열 b가 있을 때 int a[5] int b[7] a의 5개와 b의 나머지 배열을 출력
int main(){
    int a[5] = {4, 7, 9, 3, 6};
    int b[7] = {10, 20, 30, 40, 50, 60, 70};

    int* pa = a;
    int* pb = b;

    printf("<포인터를 사용하지 않은 배열 복사 결과>\n");
    for(int i = 0; i< sizeof a / sizeof(a[0]); i++){
        *(pb+i) = *(pa+i);
    }
    for(int i = 0; i< sizeof b / sizeof(b[0]); i++){
        printf("%d ", *(pb+i));
    }
    printf("\n\n<포인터를 사용한 배열 복사 결과>\n");
    for(int i = 0; i< sizeof a/ sizeof(a[0]); i++){
        b[i] = a[i];
    }
    for(int i = 0; i< sizeof b / sizeof(b[0]); i++){
        printf("%d ", b[i]);
    }
    return 0;
}