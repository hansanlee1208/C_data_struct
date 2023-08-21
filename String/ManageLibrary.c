// 도서관리 프로그램을 만들어보자
//  책을 새로 추가하는 기능( 각 책의 정보는 제목, 저자의 이름, 출판사)
//  제목, 이름 , 출판사로 검색시 해당하는 책의 정보 출력
//  책 빌리는 기능 . 반납 기능 구현

#include <stdio.h>

int add_book(
    char (*book_name)[30], char (*auth_name)[30],
    char (*publ_name)[30], int *borrowed, int *num_total_book);

int main()
{
    int user_choice;

    while (1)
    {
        printf("도서 관리 프로그램입니다. \n");
        printf("무엇을 하고 싶으신가요 \n");
        printf("1. 책 등록하기\n");
        printf("2. 책 검색하기\n");
        printf("3. 책 빌리기\n");
        printf("4. 책 반납하기\n");
        printf("5. EXIT\n");

        printf("당신의 선택은? :");
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
            printf("프로그램이 종료 되었습니다....\n");
            break;
        }
        else
        {
            printf("해당하는 숫자를 다시 입력해주세요");
        }
    }
    return 0;
}
// void search_book(char )