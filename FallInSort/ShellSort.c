#include <stdio.h>

#define SWAP(a, b){int dum = a; a = b; b = dum;}

int *origin;
int on;

void ShellSort(int *base, int N);

int main(){
    int arr[10] = {9, 4, 3, 2, 10, 5, 8, 1, 7, 6};
    origin = arr;
    on = 10;
    ShellSort(arr, 10);

    return 0;
}

void InsertionSort2(int *base, int size, int step);
void ShowArray(int *arr, int N);

void ShellSort(int *base, int size){
    int i, step;

    for(step = size / 2; step > 0; step /= 2){
        printf("step : %d\n", step);
        for(i = 0; i < step; i++){
            InsertionSort2(base + i, size - i, step);
        }
    }
}

void InsertionSort2(int *base, int size, int step){
    int i, j;
    for(i = step ; i < size; i += step){
        for(j = i; j > 0; j -= step){
            if(base[j-step] > base[j]){
                SWAP(base[j - step], base[j]);
                ShowArray(origin, on);
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