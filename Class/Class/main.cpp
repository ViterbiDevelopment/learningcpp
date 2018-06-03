//
//  main.cpp
//  Class
//
//  Created by Viterbi on 2018/6/3.
//  Copyright © 2018年 Viterbi. All rights reserved.
//

#include <iostream>
#include "stock00.hpp"

int main(int argc, const char * argv[]) {
    
    Stock fluffy_the_cat;
    fluffy_the_cat.acquire("Nanosmart", 20, 12.50);
    fluffy_the_cat.show();
    
    fluffy_the_cat.buy(15, 18.125);
    fluffy_the_cat.show();
    
    return 0;
}
