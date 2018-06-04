//
//  PointB.cpp
//  funcpointer
//
//  Created by Viterbi on 2018/6/4.
//  Copyright © 2018年 viterbi.wang. All rights reserved.
//

#include <stdio.h>
#include <iostream>

class PointP {
    
public:
    void showPoint(){
        using std::cout;
        
        // 指针赋值 指向不同的指针
        int a = 3;
        int b = 4;
        
        int *p = &a;
        
        int *q = &b;
        
        q = p;
        
        cout << "a: " << &a << std::endl;
        cout << "b: " << &b << std::endl;
        cout << "p: " << p << " values :" << *p <<std::endl;
        cout << "q: " << q << " values :" << *q << std::endl;
    }
};


