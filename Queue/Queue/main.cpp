//
//  main.cpp
//  Queue
//
//  Created by Viterbi on 2018/6/8.
//  Copyright © 2018年 Viterbi. All rights reserved.
//

#include <iostream>

typedef int dataType;

typedef struct Node{
  
  dataType data;
  Node *next;
  
}Node,*pNode;

typedef struct Queue{
  
  pNode front;
  pNode Rear;
  
}Queue,*pQueue;

void InitQueue(pQueue queue);
bool IsEmptyQueue(pQueue queue);
void InsertQueue(pQueue queue,dataType data);
void DeleteQueue(pQueue queue);
void TravererQueue(pQueue queue);
void ClearQueue(pQueue queue);

int main(int argc, const char * argv[]) {
  
  std::cout<<"hello word"<<std::endl;
  Queue queue;
  InitQueue(&queue);
  
  InsertQueue(&queue, 1);
  InsertQueue(&queue, 2);
  InsertQueue(&queue, 3);
  InsertQueue(&queue, 4);
  InsertQueue(&queue, 5);
  InsertQueue(&queue, 6);
  
  DeleteQueue(&queue);
  
  TravererQueue(&queue);
  
//  ClearQueue(&queue);
//
//  TravererQueue(&queue);
//
  std::cout<< queue.Rear << std::endl;
  std::cout<< queue.front << std::endl;
  
  
  return 0;
}

bool IsEmptyQueue(pQueue queue){
  
  if (queue->Rear == queue->front) {
    return true;
  }else{
    return false;
  }
}

void InitQueue(pQueue queue){
  
  queue->front = (pNode)malloc(sizeof(Node));
  queue->Rear = queue->front;
  
  std::cout<< queue->Rear << std::endl;
  std::cout<< queue->front << std::endl;
  
  
  if (queue->front == NULL) {
    exit(-1);
  }
}

void InsertQueue(pQueue queue,dataType data){
  
  pNode p = (pNode)malloc(sizeof(Node));
  p->data = data;
  p->next = NULL;
  
  queue->Rear->next = p;
  queue->Rear = p;
  
}

void DeleteQueue(pQueue queue){
  
  if (!IsEmptyQueue(queue)) {
    
    pNode p = queue->front->next;
    
    queue->front->next = p->next;
    
    if (queue->Rear == p) {
      queue->Rear = queue->front;
    }
    
    free(p);
    p = NULL;
  }
  
}

void TravererQueue(pQueue queue){
  
  if (!IsEmptyQueue(queue)) {
    
    pNode p = queue->front->next;
    
    while (p != NULL) {
      
      std::cout<<p->data<<std::endl;
      p = p->next;
      
    }
    
  }
  
}

void ClearQueue(pQueue queue){
  
  while (queue->front) {
    
    pNode temp = queue->front;
    
    queue->front = queue->front->next;
    queue->Rear = queue->front;
    
    free(temp);
  }
  
}





