#include <stdio.h>

int main(){
    int arr[10] = {1, 3, 3, 4, 5, 6, 7, 8, 9, 10};
    int* parr = arr;
    int i;
    //parr = &arr[0];
    printf("%d\n", sizeof(arr));
    printf("%d\n", sizeof(parr));

    for(i=0; i< 10; i++){
        printf("arr[%d]의 값은 : %d\n", i, arr[i]);
        printf("arr[%d] 의 주소값 : %p \n", i, &arr[i]);
        printf("(parr + %d ) 의 값 : %p", i, (parr +i));

        if(&arr[i] == (parr + i)){
            printf("--> 일치 \n");
        } else{
            printf("--> 불일치 \n");
        }
    }
    return 0;

    
}