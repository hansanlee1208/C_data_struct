#include <stdio.h>

#define SWAP(a, b){int dum; dum = a; a = b; b = dum;}

void InsertionSort(int *base, int N);
void ShowArray(int *arr, int N);

int main(){
    int arr[10] = {9, 4, 3, 10, 5, 8, 7, 6, 2, 1};
    ShowArray(arr, 10);
    InsertionSort(arr, 10);

    return 0;
}

void InsertionSort(int *base, int N){
    int i, j;
    for(i = 1; i < N; i++){
        for(j = i; j > 0; j--){
            if(base[j-1] > base[j]){
                SWAP(base[j-1], base[j]);
                ShowArray(base, 10);
            } else {
                break;
            }
        }
    }
}

void ShowArray(int *arr, int N){
    int i;
    for(i = 0; i < N; i++){
        printf("%4d", arr[i]);
    }
    printf("\n");
}