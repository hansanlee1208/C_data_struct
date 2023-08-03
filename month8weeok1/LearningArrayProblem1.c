#include <stdio.h>
// 입력받는 학생들의 성적을 높은 순으로 정렬하는 프로그램 작성
int main()
{
    // 학생 수를 배열의 크기만큼 선언 -> scanf를 통해 입력 받기
    // -> 배열에 저장된 숫자를 크기가 높은 순으로 정렬
    int arr_score[10];
    int score = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("학생[%d] 성적을 입력해주세요 :",i+1);
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
        printf("%d 등 성적 : %d \n", i+1, arr_score[i]);
    }
}