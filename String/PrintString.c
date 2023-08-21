#include <stdio.h>
// 길이가 최대 100 인 문자열을 하나 입력 받아서 
// 문자열을 역순으로 출력하는 함수를 만들어보세요.
// (난이도 : 下) 예를 들어서 "abcde" 입력 --> "edcba" 출력
int print_reverse(char *str1);

int main() {
    char str[100];
    
    printf("문자열을 입력하세요: ");
    fgets(str, sizeof(str), stdin); // fgets를 사용하여 문자열 입력 받음
    str[strlen(str) - 1] = '\0'; // fgets로 인해 개행 문자를 제거

    print_reverse(str);

    return 0;   
}

int print_reverse(char *str1) {
    int length = strlen(str1); // 입력된 문자열의 길이 계산

    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str1[i]); // 문자 하나씩 출력
    }

    return 0;
}