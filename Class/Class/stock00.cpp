//
//  stock00.cpp
//  Class
//
//  Created by Viterbi on 2018/6/3.
//  Copyright © 2018年 Viterbi. All rights reserved.
//

#include "stock00.hpp"
#include <iostream>

void Stock::acquire(const std::string & co,long n,double pr){
    
    company = co;
    if (n < 0) {
        std::cout << "Number of share cannot be negative;"
        << company << "shares set to 0.\n";
        shares = 0;
    }else
        shares = n;
    share_val = pr;
    set_tot();
    
}

void Stock::buy(long num, double price){
    
    if (num < 0) {
        std::cout << "Number of share purchase cannot be negative;"
        << "Transation is abort .\n";
    }
    else{
        shares += num;
        share_val  = price;
        set_tot();
    }
    
}

void Stock::sell(long num, double price){
    
    using std::cout;
    if (num < 0) {
        cout << "Number of share purchase cannot be negative;"
        << "Transation is abort .\n";
    }else if (num > shares){
        cout << "You cannot sell more than you have!"
        << "Transation is abort .\n";
    }else{
        shares -= num;
        share_val = price;
        set_tot();
    }
    
}

void Stock::update(double price){
    share_val = price;
    set_tot();
}

void Stock::show(){
    
    using std::cout;
    using std::ios_base;
    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);
    
    cout << "Company: " << company
    << " Shares: " << shares << "\n"
    << " Share price: $" << share_val;
    
    cout.precision(2);
    cout << " Total worth: $" << total_val << ".\n";
    
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
    
    
}

