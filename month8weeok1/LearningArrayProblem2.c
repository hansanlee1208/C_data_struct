#include <stdio.h>
// �Է¹��� ������ ���� �׷����� ��Ÿ���� ���α׷� �ۼ�
int main(){
    int arr[5];
    int max =0;
    printf("���� 5���� �Է����ּ��� :");
    for(int i =0; i <5; i++){
        scanf("%d", &arr[i]);
        if(max < arr[i]){
            max = arr[i];
        }
    }
    // // ������ ����Ұ�,
    // for(; max > 0; max--){
    //     if(arr[0] >= max) printf("*  ");
    //     else printf("   ");
    //     if(arr[1] >= max) printf("*  ");
    //     else printf("   ");
    //     if(arr[2] >= max) printf("*  ");
    //     else printf("   ");
    //     if(arr[3] >= max) printf("*  ");
    //     else printf("   ");
    //     if(arr[4] >= max) printf("*  ");
    //     else printf("   ");
    //     printf("\n");
    // }
    for(; max > 0; max--){
        printf("|     ");
        if(arr[0] == max)printf("����  ");
        else if(arr[0] > max)printf("����  ");
        else printf("    ");
        if(arr[1] == max)printf("����  ");
        else if(arr[1] > max)printf("����  ");
        else printf("    ");
        if(arr[2] == max)printf("����  ");
        else if(arr[2] > max)printf("����  ");
        else printf("    ");
        if(arr[3] == max)printf("����  ");
        else if(arr[3] > max)printf("����  ");
        else printf("    ");
        if(arr[4] == max)printf("����  ");
        else if(arr[4] > max)printf("����  ");
        else printf("    ");
        printf("\n");
    }
}