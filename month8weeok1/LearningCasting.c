#include <stdio.h>
#include <math.h>

// type casting
int main(){
    double num = 1234.56789;
    float fff = 12.631f;
    printf("%f\n", num);         // 1234.56789
    printf(".0f : %.0f\n", num); // �ڵ� �ݿø��Ǵ� ��� :1235
    printf(".1f : %.1f\n", num); 

    //�ڵ� �ݿø� �ϰ� ���� ���� �ÿ� ceil/floor�̿�
    printf("%.2f\n", ceil(fff*100)/100);
    printf("%.2f\n", floor(fff*100)/100);
    printf("%.2f\n", fff);
    
    return 0;
}