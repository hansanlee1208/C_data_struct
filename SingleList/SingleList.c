#include <stdio.h>
#include <string.h>
#include <malloc.h>

typedef struct NODE
{
    char szData[64];
    struct NODE* next;
} NODE;

NODE* g_pHead = NULL;

// 연결 리스트 전체 데이터 출력
void PrintList(void){
    NODE* pHead = g_pHead;
    while(pHead != NULL){
        printf("[%p] %s, next[%p]\n", pHead, pHead->szData, pHead->next);
        pHead = pHead->next;
    }
    putchar('  \n');
}

int InserNewNode(char* pszData){
    // 새로운 노드 생성
    NODE* pNode = (NODE*)malloc(sizeof(NODE));
    memset(pNode, 0, sizeof(NODE));
    strcpy_s(pNode->szData, sizeof(pNode->szData), pszData);
    
    // 생성한 노드 추가
    if(g_pHead == NULL){
        g_pHead = pNode;
    } else{
        pNode->next = g_pHead;
        g_pHead = pNode;
    }
    return 1;
}

int main(){
    InserNewNode("TEST01");
    PrintList();
    InserNewNode("TEST02");
    PrintList();
    InserNewNode("TEST03");
    PrintList();

    return 0;
}