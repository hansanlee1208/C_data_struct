#include <stdio.h>

int main(){
    int input;

    printf("마이 펫 \n");
    printf("무엇을 하실 것인지 입력하세요 \n");
    printf("1. 밥주기 \n");
    printf("2. 씻기기 \n");
    printf("3. 재우기 \n");

    scanf("%d", &input);

    // if(input == 1){
    //     printf("밥줘서 고마워");
    // } else if(input == 2){
    //     printf("씻기기 고마워");
    // } else if(input == 3){
    //     printf("잘자");
    // } else{
    //     printf("1,2,3으로만 돼 다시 입력해봐");
    // }

    switch(input) {
        case 1:
        printf("밥");
        break;

        case 2:
            printf("wash");
            break;
        case 3 :
            printf("sleep");
            break;

        default :
        printf("다시해");
        break;
    }
    return 0;
    
}
// 1. switch 문의 '값' 부분에 정수만 와야하는 이유
// - jump table은 프로그램 초기에 작성 되기 때문에 이미 switch문이 실행 되기 전에 작성된다.
// 따라서 '값' 부분에 변수가 들어가게 되면 jump table에 무엇이 올지 알수 없으므로 변수 x

// 2. case문 순서가 1-2-3-10-5-...불규칙 적일때 컴퓨터는 jump table을 어떻게 작성할까
// - jump table크기가 가장 큰 숫자만큼으로 된다 . 그렇기떄문에 순차적으로 작성하는것이 best