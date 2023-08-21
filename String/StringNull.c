#include <stdio.h>

int main(){
    char null_1 = '\0';
    char null_2 = 0;
    char null_3 = (char)NULL;

    char not_null = '0';

    printf("NULL의 정수 (아스키)값 : %d, %d, %d \n", null_1, null_2, null_3);
    printf("'0'의 정수 (아스키)값 : %d \n", not_null);

    char sentence_1[4] = {'P', 's', 'i', '\0'};
    char sentence_2[4] = {'P', 's', 'i', 0};
    char sentence_3[4] = {'P', 's', 'i', (char)NULL};
    char sentence_4[4] = {"Psi"};

    printf("sentence_1 : %s \n", sentence_1);
    printf("sentence_2 : %s \n", sentence_2);
    printf("sentence_3 : %s \n", sentence_3);
    printf("sentence_4 : %s \n", sentence_4);

    char word[30] = {"long sentence"};
    char *str = NULL;
    str = (char*)malloc(20);
    str = word;
    printf("%s \n ", str);

    return 0;
}