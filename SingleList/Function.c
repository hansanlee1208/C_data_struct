#include <stdio.h>

int print_hello(){
    printf("Hello!! \n");
    return 0;
    printf("haha\n");
}

int slave(int master_money){
    master_money += 10000;
    return master_money;
}
int factorization_num(int number){
    //���μ����� �ϴ� ��� -> �ڽź��� ���� ���� ��� ����
    int on =0;
    int origin = number ;
    for(int i =2; i <= number; i++){
        if((number % i == 0) && (on == 0)){
            printf("%d ", i);
            on++;
            number /= i;
        } 
        if((number % i == 0) && (on > 0)){
            while(number % i == 0){
                printf("* %d ", i);
                number /= i;
            }
        }
        if(number == 1){
            printf(" = %d", origin);
            break;
        } 
    }
}
int main(){
    printf("�Լ��� �ҷ����� :");
    print_hello();

    printf("�� �θ���? ");
    print_hello();

    int my_money = 10000;
    printf("2009.12.12 ��� : $%d \n", slave(my_money));
    factorization_num(6);
    return 0;
}