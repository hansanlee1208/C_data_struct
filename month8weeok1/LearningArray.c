#include <stdio.h>

int main(){
    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // for(int i = 0; i<10; i++){
    // printf("Array %d 번째 원소 : %d \n",i+1, arr[i]);

    // }

    // return 0;

    int arr[10];
    int score = 0;
    for(int i = 0; i<10; i++){
        printf("%d 번째 학생의 성적은? : ", i+1);
        scanf("%d", &score);
        arr[i] = score;
    }
    score =0;
    for(int j =0; j<10; j++){
        score += arr[j];
    }
    score = score/10;
    printf("전체 학생의 평균은 : %d\n", score);

    for(int k =0; k<10; k++){
        if(arr[k] >= score)printf("학생 %d : 합격\n", k+1);
        else printf("학생 %d : 불합격\n", k+1);
    }
    return 0;
}