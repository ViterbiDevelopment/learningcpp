//
//  main.cpp
//  Stack
//
//  Created by Viterbi on 2018/6/10.
//  Copyright © 2018年 Viterbi. All rights reserved.
//

#include <iostream>

#define MAXVEX 100
#define IUNFINITY 65535

typedef char VerterType;
typedef int EdgeType;

typedef struct EdgeNode{
  int adjvex;
  EdgeType weight;
  EdgeNode *next;
  
}EdgeNode;

typedef struct VertexNode{
  
  VerterType data;
  EdgeNode *firstedge;
  
}VertexNode;

typedef struct GraphyAdjList{
  
  VertexNode adjList[MAXVEX];
  int vnum,enumber;
  
}GraphyAdjList;

void creatGraphy(GraphyAdjList *g);

int main(int argc, const char * argv[]) {
  
  std::cout<<"hello word"<<std::endl;
  
  
  return 0;
}

void creatGraphy(GraphyAdjList *g){
  
  EdgeNode *e;
  printf("input vertexNum and egdeNum \n");
  scanf("%d,%d",&(g->vnum),&(g->enumber));
  
  for (int i = 0; i<g->vnum; i++) {
    
    scanf("%c",&g->adjList[i].data);
    g->adjList[i].firstedge = NULL;
  }
  

  for (int k = 0; k<g->enumber; k++) {
    
    printf("input edge serialize num (i,j):\n");
    int i,j;
    scanf("%d,%d",&i,&j);
    e = (EdgeNode *) malloc (sizeof(EdgeNode));
  }
  
}

