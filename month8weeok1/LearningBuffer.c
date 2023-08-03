#include <stdio.h>

int main(){
    char str1[50];
    char str2[50];

// str1 에 Hello dear을 넣었다고 생각했지만 scanf는 띄어쓰기나 엔터 등으로 구분하기때문에
// str1에는 Hello buffer에 dear가 저장됐다가 str2에 자동으로 dear가 저장된다.

    printf("Type a sentence : ");
    scanf("%s", str1);
    printf("sentence1 : %s\n", str1);

    printf("Type sentence : ");
    scanf("%s", str2);
    printf("sentence2 : %s\n", str2);

    return 0;
    // 버퍼에 저장된 여러 개의 문자중 인덱스를 지정해서 비워주는 방법이 있을까
    // flush는 전체를 비우던데
}