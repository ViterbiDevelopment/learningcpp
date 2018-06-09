//
//  main.cpp
//  funcpointer
//
//  Created by Viterbi on 2018/3/19.
//  Copyright © 2018年 viterbi.wang. All rights reserved.
//

#include <iostream>
#include "PointA.cpp"
#include "PointP.cpp"

//c/c++对各种函数指针写法

int add(int nLeft,int nRight);
int (*pf)(int,int);
typedef int (*PF)(int,int);

void func(int nValue,int pf(int nLeft,int nRight));
void func1(int nValue,int (*pf)(int nLeft,int nRigth));
void func2(int nValue,PF pf);

PF func3(int);

int (*func4(int))(int,int);

//func4,func3是一个函数，形参为(int),返回一个指向int(int,int)的函数指针。


// c++ 声明
typedef decltype(add) add2;
typedef decltype(add) *PF1;

add2 *fun5;

auto func6(int) -> int(*)(int,int);
decltype(add) * func7(int);

typedef void(PointA::*fun8)();

typedef void(PointA::*PFA)();
typedef void(PointB::*PFB)();

PFA pfa = &PointA::fuc;

int main(int argc, const char * argv[]) {
    // insert code here...
    
//    PointP PP;
//
//    PP.showPoint();
//
  
  int a = 3;
  
  int *p = &a;
  
  int *q = p;
  
  std::cout<<"p:"<<p<<std::endl;
  std::cout<<"q:"<<q<<std::endl;
  
  int b = 10;
  
  p = &b;
  
  std::cout<<"p:"<<p<<std::endl;
  std::cout<<"q:"<<q<<std::endl;
  
  std::cout<<"a:"<<&a<<std::endl;
  std::cout<<"b:"<<&b<<std::endl;
  
  
    return 0;
}

void testOne(){
    
    pf = add;
    pf(2,2);
    
    PF pfcun;
    pfcun = add;
    (*pfcun)(2,2);
    
    
    add2 *addfunc;
    addfunc = add;
    addfunc(3,4);
    
    pf = func4(5);
    
    auto *pf1 = add;
    std::cout<<pf1(3,4);
    
    // c++
    //    PointA A;
    //    fun8 afunc = &PointA::fuc;
    //    (A.*afunc)();
    
    PointA a;
    PointB b;
    
    (a.*pfa)();
    (b.*pfa)();
    
    pfa = &PointA::fuc2;
    (a.*pfa)();
    (b.*pfa)();
}

int (*func4(int))(int,int){
    
    return add;
}

int add(int nLeft,int nRight){
    
    return nLeft + nRight;
}


