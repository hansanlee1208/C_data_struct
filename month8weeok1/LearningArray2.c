#include <stdio.h>

int main(){ // 배열의 크기를 변수로 선언할수 없다했는데 이제는 되는것 같다.
    int a;
    int arr[a];
    
    for(int i =0; i< 5; i++){
        arr[i] = i+100;
        printf("%d\n",arr[i]);
    }
    return 0;
}