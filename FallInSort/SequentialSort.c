#include <stdio.h>

#define SWAP(a, b) { int t; t = a; a = b; b = t;}

void SequentialSort(int *base, int n);
void ShowArray(int *arr, int n);
int main(){
    int arr[10] = {9, 4, 3, 10, 5, 8, 7, 6, 2, 77};
    SequentialSort(arr, 10);

    return 0;
}

void SequentialSort(int *base, int n){
    int i, j;
    ShowArray(base, n);
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(base[i] > base[j]){
                SWAP(base[i], base[j]);
                ShowArray(base, n);
            }
        }
    }
}

void ShowArray(int *arr, int n){
    int i = 0;
    for(i=0; i< n; i++){
        printf("%4d", arr[i]);
    }
    printf("\n");
}