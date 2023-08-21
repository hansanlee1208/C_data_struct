#include <stdio.h>

int str_length(char *str);

int main(){
    char str[] = "Hello My Friend";
    printf("이 문자열의 길이는 : %d\n", str_length(str));

    char word[30];

    printf("30 자 이내의 문자열을 입력해주세요 :");
    scanf("%[^\n]", &word,sizeof word);

    printf("answer: %s\n %d",word, str_length(word));

    return 0;


}

int str_length(char *str){
    int i = 0;
    while(str[i]){
        i++;
    }
    return i;
}