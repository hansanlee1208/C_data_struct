#include <stdio.h>
// �Է¹޴� �л����� ������ ���� ������ �����ϴ� ���α׷� �ۼ�
int main()
{
    // �л� ���� �迭�� ũ�⸸ŭ ���� -> scanf�� ���� �Է� �ޱ�
    // -> �迭�� ����� ���ڸ� ũ�Ⱑ ���� ������ ����
    int arr_score[10];
    int score = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("�л�[%d] ������ �Է����ּ��� :",i+1);
        scanf("%d", &score);
        arr_score[i] = score;
    }
    for (int i = 0; i < 10; i++)
    {
        int bf = 0;
        for (int j = i + 1; j < 10; j++)
        {
            if (arr_score[i] < arr_score[j])
            {
                bf = arr_score[i];
                arr_score[i] = arr_score[j];
                arr_score[j] = bf;
            }
        }
        printf("%d �� ���� : %d \n", i+1, arr_score[i]);
    }
}