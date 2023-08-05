#include <stdio.h>

int main(){
    int a[3][3] ={{0,1,2},{0,1,2},{0,1,2}};
    int ar[3][3] = {0,1,2,0,1,2,0,1,2};
    // a[3][3] = ar[3][3] = arr[3][3]
    int arr[3][3];
    arr[0][0] = 0;
    arr[0][1] = 1;
    arr[0][2] = 2;
    arr[1][0] = 0;
    arr[1][1] = 1;
    arr[1][2] = 2;
    arr[2][0] = 0;
    arr[2][1] = 1;
    arr[2][2] = 2;

    for(int i = 0; i<3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i<3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d", ar[i][j]);
        }
        printf("\n");
    }
}