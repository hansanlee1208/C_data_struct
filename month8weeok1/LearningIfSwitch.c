#include <stdio.h>

int main(){
    int input;

    printf("���� �� \n");
    printf("������ �Ͻ� ������ �Է��ϼ��� \n");
    printf("1. ���ֱ� \n");
    printf("2. �ı�� \n");
    printf("3. ���� \n");

    scanf("%d", &input);

    // if(input == 1){
    //     printf("���༭ ����");
    // } else if(input == 2){
    //     printf("�ı�� ����");
    // } else if(input == 3){
    //     printf("����");
    // } else{
    //     printf("1,2,3���θ� �� �ٽ� �Է��غ�");
    // }

    switch(input) {
        case 1:
        printf("��");
        break;

        case 2:
            printf("wash");
            break;
        case 3 :
            printf("sleep");
            break;

        default :
        printf("�ٽ���");
        break;
    }
    return 0;
    
}
// 1. switch ���� '��' �κп� ������ �;��ϴ� ����
// - jump table�� ���α׷� �ʱ⿡ �ۼ� �Ǳ� ������ �̹� switch���� ���� �Ǳ� ���� �ۼ��ȴ�.
// ���� '��' �κп� ������ ���� �Ǹ� jump table�� ������ ���� �˼� �����Ƿ� ���� x

// 2. case�� ������ 1-2-3-10-5-...�ұ�Ģ ���϶� ��ǻ�ʹ� jump table�� ��� �ۼ��ұ�
// - jump tableũ�Ⱑ ���� ū ���ڸ�ŭ���� �ȴ� . �׷��⋚���� ���������� �ۼ��ϴ°��� best