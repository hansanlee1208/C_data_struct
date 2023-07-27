#include <stdio.h>
#include <string.h>
#include <malloc.h>

// 연결 리스트 코딩 순서
// 전체 리스트 출력 함수 작성
// 새 노드 추가 함수 작성 malloc () + free() 강박 필요 x
// 전체 리스트 삭제 함수 작성
typedef struct NODE {
    char szData[64];
    struct NODE* next;
} NODE;

NODE* g_pHead = NULL; // 전역변수이므로 g_로 시작
/* 연결 리스트 전체 데이터 출력 */
void PrintList(void){
    NODE* pHead = g_pHead;
    while(pHead != NULL){
        printf("[%p] %s,next[%p]\n",pHead, pHead->szData, pHead->next);
        pHead = pHead->next;
    }
    putchar('\n');
}

int InserNewNode(char* pszData){
    
    NODE* pNode = (NODE*)malloc(sizeof(NODE));
    // malloc은 0 초기화가 안되므로
    memset(pNode, 0, sizeof(NODE));
    strcpy_s(pNode->szData, sizeof(pNode->szData), pszData);

    if(g_pHead == NULL)
        g_pHead = pNode;
    else{
        pNode->next = g_pHead;
        g_pHead = pNode;
    }
    return 1;
}
int main(){

    //List  테스트를 위한 코드
    InserNewNode("Test01");
    PrintList();
    InserNewNode("Test02");
    PrintList();
    InserNewNode("Test03");
    PrintList();
    return 0;
}