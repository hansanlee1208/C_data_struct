#include <stdio.h>
// �����ʹ� �޸� �� ��ġ�� Ư���� �������� (����)�ּҰ��� �����ϴ� ����
int main(){
    int *p;

    int a =1;

    p = &a;
    printf("������ p �� %d\n" ,p);
    printf("int ���� a �� ����� ���� %d \n", &a);

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