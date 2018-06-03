//
//  stock00.hpp
//  Class
//
//  Created by Viterbi on 2018/6/3.
//  Copyright © 2018年 Viterbi. All rights reserved.
//

#ifndef stock00_hpp
#define stock00_hpp

#include <stdio.h>
#include <string>

class Stock
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    inline void set_tot(){ total_val = shares * share_val; }
public:
    void acquire(const std::string & co,long n,double pr);
    void buy(long num,double price);
    void sell(long num,double price);
    void update(double price);
    void show();
};

#endif /* stock00_hpp */


