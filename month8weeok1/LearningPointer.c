#include <stdio.h>
// 포인터는 메모리 상에 위치한 특정한 데이터의 (시작)주소값을 보관하는 변수
int main(){
    int *p;

    int a =1;

    p = &a;
    printf("포인터 p 값 %d\n" ,p);
    printf("int 변수 a 가 저장된 변수 %d \n", &a);

    int k ;
    int l;

    const int* pa = &k;
    int* const ppa = &k; 
    // *pa = l;
    // pa = &l;

    *ppa = 3;
    const int aa = 3;
    int const bb = 4;

    printf("%d\n", pa);
    printf("%d\n", aa);
    printf("%d\n", bb);
    }