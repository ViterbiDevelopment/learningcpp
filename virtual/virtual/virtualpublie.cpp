//
//  virtualpublie.cpp
//  virtual
//
//  Created by Viterbi on 2018/3/17.
//  Copyright © 2018年 viterbi.wang. All rights reserved.
//


#include <iostream>

using namespace std;
class Person{
public:    Person(){ cout<<"Person构造"<<endl; }
    ~Person(){ std::cout<<"Person析构"<<endl; }
};
class Teacher : virtual public Person{
public:    Teacher(){ std::cout<<"Teacher构造"<<endl; }
    ~Teacher(){ std::cout<<"Teacher析构"<<endl; }
};
class Student : virtual public Person{
public:      Student(){ std::cout<<"Student构造"<<endl; }
    ~Student(){ std::cout<<"Student析构"<<endl; }
};
class TS : public Teacher,  public Student{
public:            TS(){ std::cout<<"TS构造"<<endl; }
    ~TS(){ std::cout<<"TS析构"<<endl; }
};

