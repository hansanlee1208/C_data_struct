#include <stdio.h>

int main(){
    int arr[10] = {1, 3, 3, 4, 5, 6, 7, 8, 9, 10};
    int* parr = arr;
    int i;
    //parr = &arr[0];
    printf("%d\n", sizeof(arr));
    printf("%d\n", sizeof(parr));

    for(i=0; i< 10; i++){
        printf("arr[%d]�� ���� : %d\n", i, arr[i]);
        printf("arr[%d] �� �ּҰ� : %p \n", i, &arr[i]);
        printf("(parr + %d ) �� �� : %p", i, (parr +i));

        if(&arr[i] == (parr + i)){
            printf("--> ��ġ \n");
        } else{
            printf("--> ����ġ \n");
        }
    }
    return 0;

    
}