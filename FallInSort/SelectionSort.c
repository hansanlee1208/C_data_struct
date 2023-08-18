#include <stdio.h>

#define SWAP(a, b){int dum = a; a = b; b = dum;}

void SelectionSort(int *base, int N);
void ShowArray(int *arr, int N);

int main(){
    int arr[10] = {5, 24, 4, 9, 8, 10, 7, 3, 11, 15};
    SelectionSort(arr, 10);
    
    return 0;
}

void SelectionSort(int *base, int N){
    int i, j;
    int max;
    ShowArray(base, N);
    for(i = N; i > 1; i--){
        max = 0;
        for(j = 1; j < i; j++){
            if(base[max]<base[j]){
                max = j;
            }
        }
        SWAP(base[max], base[i-1]);
        ShowArray(base, 10);
    }
}


void ShowArray(int *arr, int N){
    int i;
    for(i = 0; i < N; i++){
        printf("%4d ", arr[i]);
    }

    printf("\n");
}