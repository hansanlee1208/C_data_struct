#include <stdio.h>
// BubbleSort
// Best O(n) Average O(n^2) Worst O(n^2) Memory 1
#define SWAP(a, b){ int t; t = a; a = b; b = t;}

void BubbleSort(int *base, int n);
void ShowArray(int *arr, int n);

int main(){
    int arr[10] = {9, 4, 3, 10, 5, 8, 1, 2, 34, 4};
    BubbleSort(arr, 10);

    return 0;
}

void BubbleSort(int *base, int n){
    int i, j;
    ShowArray(base, n);
    for(i = n; i>1; i--){
        for(j=1; j<i; j++){
            if(base[j-1] >base[j]){
                SWAP(base[j-1], base[j]);
                ShowArray(base, n);
            }
        }
    }
}

void ShowArray(int *arr, int n){
    int i;
    for(i=0; i< n; i++){
        printf("%2d ", arr[i]);
    }
    printf("\n");
}