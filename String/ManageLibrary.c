// �������� ���α׷��� ������
//  å�� ���� �߰��ϴ� ���( �� å�� ������ ����, ������ �̸�, ���ǻ�)
//  ����, �̸� , ���ǻ�� �˻��� �ش��ϴ� å�� ���� ���
//  å ������ ��� . �ݳ� ��� ����

#include <stdio.h>

int add_book(
    char (*book_name)[30], char (*auth_name)[30],
    char (*publ_name)[30], int *borrowed, int *num_total_book);

int main()
{
    int user_choice;

    while (1)
    {
        printf("���� ���� ���α׷��Դϴ�. \n");
        printf("������ �ϰ� �����Ű��� \n");
        printf("1. å ����ϱ�\n");
        printf("2. å �˻��ϱ�\n");
        printf("3. å ������\n");
        printf("4. å �ݳ��ϱ�\n");
        printf("5. EXIT\n");

        printf("����� ������? :");
        scanf("%d", &user_choice);

        if (user_choice == 1)
        {
            // add_book();
        }
        else if (user_choice == 2)
        {
            // search_book();
        }
        else if (user_choice == 3)
        {
            // borrow_book();
        }
        else if (user_choice == 4)
        {
            // return_book();
        }
        else if (user_choice == 5)
        {
            printf("���α׷��� ���� �Ǿ����ϴ�....\n");
            break;
        }
        else
        {
            printf("�ش��ϴ� ���ڸ� �ٽ� �Է����ּ���");
        }
    }
    return 0;
}
// void search_book(char )