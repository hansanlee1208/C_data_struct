#include <stdio.h>

int str_length(char *str);

int main(){
    char str[] = "Hello My Friend";
    printf("�� ���ڿ��� ���̴� : %d\n", str_length(str));

    char word[30];

    printf("30 �� �̳��� ���ڿ��� �Է����ּ��� :");
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