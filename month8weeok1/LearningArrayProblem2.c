#include <stdio.h>
// 입력받은 성적을 막대 그래프로 나타내는 프로그램 작성
int main(){
    int arr[5];
    int max =0;
    printf("숫자 5개를 입력해주세요 :");
    for(int i =0; i <5; i++){
        scanf("%d", &arr[i]);
        if(max < arr[i]){
            max = arr[i];
        }
    }
    // // 별찍기로 감잡았고,
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
        if(arr[0] == max)printf("┌┐  ");
        else if(arr[0] > max)printf("││  ");
        else printf("    ");
        if(arr[1] == max)printf("┌┐  ");
        else if(arr[1] > max)printf("││  ");
        else printf("    ");
        if(arr[2] == max)printf("┌┐  ");
        else if(arr[2] > max)printf("││  ");
        else printf("    ");
        if(arr[3] == max)printf("┌┐  ");
        else if(arr[3] > max)printf("││  ");
        else printf("    ");
        if(arr[4] == max)printf("┌┐  ");
        else if(arr[4] > max)printf("││  ");
        else printf("    ");
        printf("\n");
    }
}