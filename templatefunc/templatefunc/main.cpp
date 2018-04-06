//
//  main.cpp
//  templatefunc
//
//  Created by Viterbi on 2018/4/5.
//  Copyright © 2018年 viterbi.wang. All rights reserved.
//

#include <iostream>

using namespace std;

//模版
template <typename T>
void Swap(T &a,T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}
//显示具体化
//template void Swap(int &a,int &b);
//显示 实例化
template<> void Swap<int>(int &a,int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

// 重载模版函数
template <typename T>
void Swap(T *a,T *b,int n) {
    T temp;
    for (int i = 0; i<n; i++) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}
template <typename T>
void display(const T *a,const T *b,int n) {
    
    for (int i = 0; i<6; i++) {
        cout << "a:" << a[i] << + "\n";
        cout << "b:" << b[i] << + "\n";
    }
}

//decltype关键字
template <class T>
void f1(T &a,T &b) {
    
    decltype(a + b) ab = a + b;
}

template <class T1,class T2>
auto f2(T1 &a,T2 &b) -> decltype(a + b) {
    return a + b;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int a = 10;
    int b = 20;
    
    Swap(a,b);
    cout << a << + "\n"<< b << + "\n";
    
    
    int n[] = {1,2,3,4,5,6};
    int m[] = {7,8,9,10,11,12};
    Swap(n, m,6);
    display(n, m, 6);
    
    return 0;
}
