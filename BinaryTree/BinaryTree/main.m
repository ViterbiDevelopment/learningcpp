//
//  main.m
//  BinaryTree
//
//  Created by Viterbi on 2018/3/25.
//  Copyright © 2018年 viterbi.wang. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef struct BTNode{
    int data;
    struct BTNode *lChild;
    struct BTNode *rChild;
}BitNode;

void CreateBitTree(BitNode **T){
    int ch;
    scanf("%d",&ch);
    if (ch == -1) {
        *T = nil;
        return ;
    }else{
        *T = (BitNode *)malloc(sizeof(BitNode));
        (*T)->data = ch;
        CreateBitTree(&((*T)->lChild));
        CreateBitTree(&((*T)->rChild));
    }
}
// 根左右的方式遍历
void PreOrderBitTree(BitNode *T){
    
    if (T == nil) {
        return;
    }else{
        
        printf("%d---",T->data);
        PreOrderBitTree(T->lChild);
        PreOrderBitTree(T->rChild);
    }
}
//左根右
void MidOrderBitTree(BitNode *T){
    
    if (T == nil) {
        return;
    }else{
        MidOrderBitTree(T->lChild);
        printf("%d-----",T->data);
        MidOrderBitTree(T->rChild);
    }
}
//左右根
void LastOrderBitTree(BitNode *T){
    if (T == nil) {
        return;
    }else{
        LastOrderBitTree(T->lChild);
        LastOrderBitTree(T->rChild);
        printf("%d-----",T->data);
    }
}

int main(int argc, const char * argv[]) {
    
    //根左右的方式创建二叉树
    BitNode *T;
    CreateBitTree(&T);
    return 0;
}
