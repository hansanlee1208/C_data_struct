#include <stdio.h>
// ���̰� �ִ� 100 �� ���ڿ��� �ϳ� �Է� �޾Ƽ� 
// ���ڿ��� �������� ����ϴ� �Լ��� ��������.
// (���̵� : ��) ���� �� "abcde" �Է� --> "edcba" ���
int print_reverse(char *str1);

int main() {
    char str[100];
    
    printf("���ڿ��� �Է��ϼ���: ");
    fgets(str, sizeof(str), stdin); // fgets�� ����Ͽ� ���ڿ� �Է� ����
    str[strlen(str) - 1] = '\0'; // fgets�� ���� ���� ���ڸ� ����

    print_reverse(str);

    return 0;   
}

int print_reverse(char *str1) {
    int length = strlen(str1); // �Էµ� ���ڿ��� ���� ���

    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str1[i]); // ���� �ϳ��� ���
    }

    return 0;
}