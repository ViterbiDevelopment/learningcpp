//
//  PointA.cpp
//  funcpointer
//
//  Created by Viterbi on 2018/3/19.
//  Copyright © 2018年 viterbi.wang. All rights reserved.
//

#include <iostream>

class PointA//定义类A
{
private:
    
    int add(int nLeft, int nRight)
    
    {
        return (nLeft + nRight);
    }
    
public:
    void fuc()
    
    {
        printf("Hello PointA::fuc()\n");
    }
    virtual void fuc2()
    {
        printf("Hello PointA::fuc2()\n");
    }
};

class PointB:public PointA {
    
public:
    
    virtual void fuc2()
    {
        printf("Hello PointB::fuc2()\n");
        
    }
    
};
