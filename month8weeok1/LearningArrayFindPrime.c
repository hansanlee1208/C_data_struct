#include <stdio.h>
#include <stdbool.h>

// �Ҽ� ã�� ���α׷�
int main()
{
    // �Ҽ��� ��Ƴ��� �迭, for���� ���� 1���� �Ҽ��� ã��
    int arr[1000];
    int isPrime = 5; // 2,3 ���� �Ҽ� 5 +2�ϸ鼭 Ȧ���� ���ؼ��� �ݺ��ؼ� �Ҽ����� �Ǻ��Ͽ� �迭�� ����
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