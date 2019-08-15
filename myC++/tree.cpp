/*
#include <iostream>
#include <float.h>

//二叉链表,左子树右子树
typedef struct BiTnode {
    int data;
    struct BiTnode *lchild, *rchild;

} BiTnode, *BiTree;


//先序遍历
void PreOrder(BiTree root) {
    if (root != NULL) {
        printf("%d", root->data);      //遍历根节点
        PreOrder(root->lchild);      //先序遍历根节点左子树
        PreOrder(root->rchild);      //先序遍历根节点右子树
    }
}

//中序遍历
void InOrder(BiTree root) {
    if (root != NULL) {
        InOrder(root->lchild);      //中序遍历根节点左子树
        printf("%d", root->data);      //遍历根节点
        InOrder(root->rchild);      //中序遍历根节点右子树
    }
}


//后序遍历
void PostOrder(BiTree root) {
    if (root != NULL) {
        PostOrder(root->lchild);      //后序遍历根节点左子树
        PostOrder(root->rchild);      //后序遍历根节点右子树
        printf("%d", root->data);      //遍历根节点
    }
}

*/
/*二叉树的中序非递归遍历算法*//*

int InOrderTraverse(BiTree root) {

    BiTree p;
    InitStack(St);  //创建一个空栈
    p = root; */
/*p指向树根节点*//*


    while (p != null || !isEmpty(St)) {
        //不是空树
        if (p != null) {
            Push(St, p);  //根节点指针入栈
            p = p->lchild; //进入根的左子树
        } else {
            q = Top(St);
            Pop(St);  //栈顶元素出栈
            printf("%d", q->data);   //访问根节点
            p = q->rchild;   //进入根的右子树
        }
    }


}























*/
