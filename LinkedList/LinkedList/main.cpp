//
//  main.cpp
//  LinkedList
//
//  Created by Viterbi on 2018/6/5.
//  Copyright © 2018年 Viterbi. All rights reserved.
//

#include <iostream>

typedef int ElemType;

typedef struct LNode{
  ElemType data;
  struct LNode *next;
}LNode,*LinkList;


void LinkListInitH(LinkList *L);
void LinkListInitHF(LinkList *L);
void LinkedListInsert(LinkList *L,int i,ElemType x);
void LinkedListDelete(LinkList *L,ElemType x);
void LinkedShowAll(LinkList *L);
void LinkedResert(LinkList *L);

int main(int argc, const char * argv[]) {
  
  LinkList T  = (LinkList)malloc(sizeof(LNode));
  T->next = NULL;
  printf("输入节点值:\n");
  LinkListInitH(&T);
  printf("%d-----",T->next->data);
//  LinkedShowAll(&T);
//
//  LinkedResert(&T);
//  printf("反转后的值顺序: \n");
//  LinkedShowAll(&T);
  
  return 0;
}
//头插法 建立链表
void LinkListInitH(LinkList *L){
  
  ElemType x;
  
  while (scanf("%d",&x) != EOF) {
    LinkList p = (LinkList)malloc(sizeof(LNode));
    p->data = x;
    p->next = (*L)->next;
    (*L)->next = p;
  }
  
}
//尾插法建立链表
void LinkListInitHF(LinkList *L){
  
  LinkList r;
  r = *L;
  ElemType x;
  
  while (scanf("%d",&x) != EOF) {
    LinkList p = (LinkList)malloc(sizeof(LNode));
    p->data = x;
    r->next = p;
    p = r;
  }
  r->next = NULL;
}

//在第i个位置插入节点
void LinkedListInsert(LinkList *L,int i,ElemType x){
  
  LNode *pre;
  pre = *L;
  
  int tempi = 0;
  for (tempi = 1; tempi < i; tempi ++)
    pre = pre->next;
  
  LNode *p = (LinkList)malloc(sizeof(LNode));
  
  p->data = x;
  p->next = pre->next;
  pre->next = p;
  
}

//单链表的删除 在链中删除值尾x的元素
void LinkedListDelete(LinkList *L,ElemType x){
  
  LNode *p,*pre = nullptr;
  p = (*L)->next;
  
  while (p->data != x) {
    
    pre = p;
    p = p->next;
    
  }
  pre->next = p->next;
  free(p);
}

//遍历所有节点
void LinkedShowAll(LinkList *L){
  
  LinkList star;
  
  for (star = (*L)->next; star != NULL; star = star->next) {
    printf("输入的值:%d \n",star->data);
  }
  
}

void LinkedResert(LinkList *L){
  
//  printf("data----%d",(*L)->next->data);
// 注释的为错误的代码。不知道为什么，逻辑没有错
//  LinkList p = *L;
//  LinkList q = (*L)->next;
//  LinkList r;
//  (*L)->next = NULL;
//  printf("开始反转:\n");
//  while (q) {
//    printf("data--%d \n",q->data);
//    r = q->next;
//    q->next = p;
//    p = q;
//    q = r;
//  }
//    *L= p;
  
  LinkList p,q,pr;
  p = (*L)->next;
  q = NULL;
  (*L)->next = NULL;

  printf("开始反转:\n");
  while (p) {
    printf("data--%d \n",p->data);
    pr = p->next;
    p->next = q;
    q = p;
    p = pr;
  }

  (*L)->next = q;
  
  
}


