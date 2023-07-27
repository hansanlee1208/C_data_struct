#include <stdio.h>

int test(int a ){
    printf("test() - Hello World");
    return 0;
}


int main(void){
    int (*eid)(int ) = NULL;
    eid(3);
    return 0;
}