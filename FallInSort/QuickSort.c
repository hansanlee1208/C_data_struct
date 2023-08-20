#include <stdio.h>

#define SWAP(a, b, t) ((t) = (a), (a) = (b), (b) = (t))

void ShowArray(int *arr, int N);
void QuickSort(int *base, int start, int finish);

int main(){
    int array[10] = { 4, 3, 7, 10, 9, 15, 1, 5, 8, 2};
    ShowArray(array, 10);
    QuickSort(array, 0, 9);
    return 0;
}

void QuickSort(int *base, int start, int finish){
    if(start >= finish)return;

    int pivot = start;
    int s = start + 1;
    int f = finish;
    int temp = 0;

    while(s <= f){
        while(s <= finish && base[s] <= base[pivot]){s++;}
        while(f > start && base[f] >= base[pivot]){f--;}

        if(s>f) SWAP(base[f], base[pivot], temp);
        else SWAP(base[s], base[f], temp);
    }
    ShowArray(base, 10);

    QuickSort(base, start, pivot -1);
    QuickSort(base, pivot+1, finish);
}

void ShowArray(int *arr, int N){
    int i = 0;
    for(i = 0; i < N; i++){
        printf("%4d", arr[i]);
    }
    printf("\n");
}