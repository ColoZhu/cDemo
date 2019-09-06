//
// Created by 600336 on 2019/9/6.
//

#include <cstdlib>
#include <limits.h>
#include "stackDemo.h"


typedef struct Node {
    int data;           /*栈中的数据元素*/
    struct Node *next;  /*上次入栈的数据元素节点的地址*/
} Node;


typedef struct Stack {  /*栈的类型定义*/
    Node *pTop;    //栈顶指针
} Stack;


Stack *NewStack() {
    return (Stack *) calloc(1, sizeof(Stack));
}

int IsEmpty(Stack *S) {  /*判断栈是否为空,1位空,否则返回0*/
    if (S == NULL || S->pTop == NULL) return 1;
    return 0;
}

/*获取栈顶元素*/
int Top(Stack *S) {

    if (IsEmpty(S)) {
        return INT_MIN; // 若栈为空,返回机器可表示的最小整数
    }
    return S->pTop->data;  //栈顶数据
}

/*元素压栈*/
void Push(Stack *S, int theData) {
    Node *newNodePtr;
    newNodePtr = (Node *) malloc(sizeof(Node));
    newNodePtr->data = theData;   //新节点数据赋值
    newNodePtr->next = S->pTop;     //新节点指向旧的栈顶元素
    S->pTop = newNodePtr;             //栈顶元素指向 新加的节点

}


/*非空栈的栈顶元素出栈*/
void Pop(Stack *S) {
    Node *lastTop;
    if (IsEmpty(S)) return;
    lastTop = S->pTop;           /*  定义一个节点,指向栈顶元素 */
    S->pTop = S->pTop->next;  /* 栈顶指针指向旧的栈顶的后一个元素*/
    free(lastTop);              /* 释放掉此节点(旧的栈顶元素)*/
}





















