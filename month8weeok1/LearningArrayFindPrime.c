#include <stdio.h>
#include <stdbool.h>

// 소수 찾는 프로그램
int main()
{
    // 소수를 담아놓을 배열, for문을 통한 1부터 소수값 찾기
    int arr[1000];
    int isPrime = 5; // 2,3 다음 소수 5 +2하면서 홀수에 대해서만 반복해서 소수인지 판별하여 배열에 저장
    arr[0] = 2;printf("arr[0] : 2\n");
    arr[1] = 3;printf("arr[1] : 3\n");
    int index = 2;
    for (;;)
    {
        bool TF = true;
        for (int i = 2; i < isPrime; i++)
        {
            if (isPrime % i == 0)
                TF = false;
        }
        if (TF == true)
        {
            arr[index] = isPrime;
            printf("arr[%d] : %d\n", index, arr[index]);
            index++;
        }
        isPrime += 2;
        if(index == 1000) break;
    }
    return 0;
}