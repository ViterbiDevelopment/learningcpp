//
//  main.cpp
//  doubleLinkList
//
//  Created by Viterbi on 2018/6/6.
//  Copyright © 2018年 Viterbi. All rights reserved.
//

#include <iostream>

typedef int dataType;

typedef struct DNode {
  dataType data;
  DNode *prev,*next;
  
}DNode,*DNodeList;

void InitDNodeList(DNodeList *head,int n); //尾插法初始化双向链表
void ShowDNodeList(DNodeList *head);
void DeleteAllList(DNodeList *head);
void DelNumNodeList(DNodeList *head,int n);//删除节点
void InsertNumNodeList(DNodeList *head,int n);// 插入的节点

int main(int argc, const char * argv[]) {
  
  DNodeList list = (DNodeList)malloc(sizeof(DNode));
  InitDNodeList(&list, 5);
  ShowDNodeList(&list);
  
  InsertNumNodeList(&list, 3);
//  DelNumNodeList(&list, 3);
  ShowDNodeList(&list);
  
  return 0;
}

void InitDNodeList(DNodeList * head,int n){
  
  DNodeList p,s;
  if (*head == NULL) {
    exit(0);
  }
  (*head)->next = NULL;
  (*head)->prev = NULL;
  
  p = *head;
  
  for (int i = 0; i<n; i++) {
    
    s = (DNodeList)malloc(sizeof(DNode));
    if (s == NULL) {
      exit(0);
    }
    printf("请输入节点的值:\n");
    scanf("%d",&(s->data));
    
    s->next = NULL;
    p->next = s;
    s->prev = p;
    p = s;
  }
  
}

void ShowDNodeList(DNodeList *head){
  
  DNodeList p = (*head)->next;
  
  printf("遍历开始\n");
  while (p != NULL) {
    
    printf("输入的值为:%d:\n",p->data);
    p = p->next;
    
  }
  printf("遍历结束\n");
  
}

void DeleteAllList(DNodeList *head){
  
  DNodeList p;
  while ((*head)->next != NULL) {
    p = (*head);
    p->next->prev = NULL;
    (*head) = p->next;
    free(p);
  }
}

void DelNumNodeList(DNodeList *head,int n){
  
  DNodeList p = (*head)->next;
  
  for (int i = 1; i<n; i++) {
    p = p->next;
  }
  if (p->next == NULL) {
    
    p->prev->next = NULL;
    free(p);
    
  }else{
    
    p->next->prev = p->prev;
    p->prev->next = p->next;
    free(p);
  }
}

void InsertNumNodeList(DNodeList *head,int n){
  
  DNodeList p = (*head)->next;
  for (int i = 1; i<n; i++) {
    p = p->next;
  }
  
  DNodeList s = (DNodeList )malloc(sizeof(DNode));
  
  printf("输入节点的值:\n");
  scanf("%d",&(s->data));
  
  p->next->prev = s;
  s->next = p->next;
  p->next = s;
  s->prev = p;
  
}


