#include <stdio.h>

int copy_str(char *dest, char *src);
void str_add(char *str1, char *str2);
int compare(char *str1, char *str2);
int main(){
    // char str1[10], str2[10];
    // printf("%s", pstr);
    // printf("���ڿ��� �Է��ϼ���: ");
    // scanf("%s", str1);
    // printf("�Է��� ���ڿ� : %s \n", str1);

    // printf("���ڿ��� �Է��ϼ���: ");
    // scanf("%s", str2);
    // printf("�Է��� ���ڿ� : %s \n", str2);

    char str1[100] = "hihello";
    char str2[2] = "hi";

    printf("���� ���� : %s \n", str1);
    
    if(compare(str2, str1)){
        printf("�Ȱ���");
    }else{
        printf("�޶�");
    }

    printf("���� ���� : %s\n", str1);
    return 0;
}
void str_add(char *str1, char *str2){
    while(*str1){
        str1++;
    }
    while(*str2){
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}
int compare(char *str1, char *str2){
    while(*str1){
        if(*str1 != *str2){
            return 0;
        }
        str1++;
        str2++;
    }
    if(*str2 == '\0') return 1;
    return 0;
}
int copy_str(char *dest, char *src){
    while(*src){
        *dest = *src;
        //printf("%d\n",dest);
        src++;
        dest++;
    }
    *dest = '\0';

    return 1;
}