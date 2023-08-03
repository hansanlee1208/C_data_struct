#include <stdio.h>
#include <math.h>

// type casting
int main(){
    double num = 1234.56789;
    float fff = 12.631f;
    printf("%f\n", num);         // 1234.56789
    printf(".0f : %.0f\n", num); // 자동 반올림되는 모습 :1235
    printf(".1f : %.1f\n", num); 

    //자동 반올림 하고 싶지 않을 시에 ceil/floor이용
    printf("%.2f\n", ceil(fff*100)/100);
    printf("%.2f\n", floor(fff*100)/100);
    printf("%.2f\n", fff);
    
    return 0;
}