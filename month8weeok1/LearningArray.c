#include <stdio.h>

int main(){
    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // for(int i = 0; i<10; i++){
    // printf("Array %d ��° ���� : %d \n",i+1, arr[i]);

    // }

    // return 0;

    int arr[10];
    int score = 0;
    for(int i = 0; i<10; i++){
        printf("%d ��° �л��� ������? : ", i+1);
        scanf("%d", &score);
        arr[i] = score;
    }
    score =0;
    for(int j =0; j<10; j++){
        score += arr[j];
    }
    score = score/10;
    printf("��ü �л��� ����� : %d\n", score);

    for(int k =0; k<10; k++){
        if(arr[k] >= score)printf("�л� %d : �հ�\n", k+1);
        else printf("�л� %d : ���հ�\n", k+1);
    }
    return 0;
}