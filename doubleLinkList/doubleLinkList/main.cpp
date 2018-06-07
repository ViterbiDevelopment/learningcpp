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

int main(int argc, const char * argv[]) {
  
  DNodeList list = (DNodeList)malloc(sizeof(DNode));
  InitDNodeList(&list, 10);
  
  printf("第一个节点的值:%d",list->next->data);
  
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
