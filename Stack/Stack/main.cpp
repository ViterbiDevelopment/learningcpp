//
//  main.cpp
//  Stack
//
//  Created by Viterbi on 2018/6/8.
//  Copyright © 2018年 Viterbi. All rights reserved.
//

#include <iostream>

typedef int dataType;

typedef struct node {
 
  dataType data;
  node *next;
  
}node,*pNode;

typedef struct Cstack{
  
  pNode top;
  pNode bottom;
  
}Cstack,*pCstack;

bool taskCreate(pCstack stack);
void popStack(pCstack stack);
void pushStack(pCstack stack,dataType data);
bool emptyStack(pCstack stack);
void traverse(pCstack stack);
void clear(pCstack stack);


int main(int argc, const char * argv[]) {
  
  std::cout<<"hello word"<<std::endl;
  
  Cstack task;
  
  bool iscreate = taskCreate(&task);
  
  std::cout<<iscreate<<std::endl;
  
  pushStack(&task, 1);
  pushStack(&task, 2);
  pushStack(&task, 3);
  pushStack(&task, 4);
  pushStack(&task, 5);
  pushStack(&task, 6);
  
  popStack(&task);
  
//  std::cout<<task.top->data<<std::endl;
//
  
  traverse(&task);
  
  return 0;
}

bool taskCreate(pCstack stack){
  
  stack->top = (pNode)malloc(sizeof(node));
  if (stack->top == NULL) {
    return false;
  }else{
    stack->bottom = stack->top;
    stack->top->next = NULL;
    return true;
  }
  
}

void pushStack(pCstack stack,dataType data){
  
  pNode p = (pNode)malloc(sizeof(node));
  p->data = data;
  
  p->next = stack->top;
  stack->top = p;

}

void popStack(pCstack stack){
  
  if (!emptyStack(stack)) {
    
    pNode r = stack->top;
    stack->top = r->next;
    
    free(r);
    r = NULL;
  }
}
bool emptyStack(pCstack stack){
  
  if (stack->bottom == stack->top) {
    return true;
  }else{
    return false;
  }
}

void clear(pCstack stack){
  
  if (!emptyStack(stack)) {
    
    pNode p = stack->top;
    pNode q = NULL;
    
    while (p != stack->bottom) {
      
      q = p->next;
      free(p);
      p = q;
    }
    
    stack->bottom = stack->top;
    
  }
  
}

void traverse(pCstack stack){
  
  if (!emptyStack(stack)) {
    
    pNode p = stack->top;
    
    while (p != stack->bottom) {
      
      std::cout << p->data << std::endl;
      p = p->next;
    }
  }
  
}

