//
//  main.cpp
//  virtual
//
//  Created by Viterbi on 2018/3/17.
//  Copyright © 2018年 viterbi.wang. All rights reserved.
//

#include <iostream>
#include "virtualpublie.cpp"

using namespace std;
class Base
{
public:
    virtual void f(float x){ cout << "Base::f(float) " << x << endl; }
    void g(float x){ cout << "Base::g(float) " << x << endl; }
    void h(float x){ cout << "Base::h(float) " << x << endl; }
};

class Derived : public Base
{
public:
    virtual void f(float x){ cout << "Derived::f(float) " << x << endl; }
    void g(int x){ cout << "Derived::g(int) " << x << endl; }
    void h(float x){ cout << "Derived::h(float) " << x << endl; }
};
int main(int argc, const char * argv[]) {
    
    //多态。基类指针指间父类,调用父类函数
    Derived d;
    Base *pb = &d;
    Derived *pd = &d;
    
    pb->f(3.14f);
    pd->f(3.14f);
    
    pb->g(3.14f);
    pd->g(3.14f);
    //
    pb->h(3.14f);
    pd->h(3.14f);
    
    //虚拟继承
    TS ts;
    
    return 0;
}

