//
//  main.cpp
//  Cin
//
//  Created by Viterbi on 2018/6/2.
//  Copyright © 2018年 Viterbi. All rights reserved.
//

#include <iostream>
// 测试几个Cin函数的差异，以及如何去解决Cin带来的问题
void TestOne(void);
void TestTwo(void);
void TestThree(void);
void TestFour(void);

using namespace std;

int main(int argc, const char * argv[]) {
  

//  TestOne();
//  TestTwo();
//  TestThree();
  TestFour();
  
  
  return 0;
}

void TestOne(void){
  
  const int Arsize = 20;
  char name[Arsize];
  char dessert[Arsize];
  
  cout<<"enter your name:\n";
  cin>>name;
  cout<<"entet your favorited dessert:\n";
  cin>>dessert;
  cout<<"i have some delicious"<<dessert;
  cout<<"for you,"<<name<<".\n";
}

void TestTwo(void){
  
  const int Arsize = 20;
  char name[Arsize];
  char dessert[Arsize];
  
  cout<<"enter your name:\n";
  cin.getline(name, Arsize);
  cout<<"entet your favorited dessert:\n";
  cin.getline(dessert, Arsize);
  cout<<"i have some delicious"<<dessert;
  cout<<"for you,"<<name<<".\n";
  
}

void TestThree(void){
  const int Arsize = 20;
  char name[Arsize];
  char dessert[Arsize];
  
  cout<<"enter your name:\n";
  cin.get(name, Arsize).get();
  cout<<"entet your favorited dessert:\n";
  cin.get(dessert, Arsize);
  cout<<"i have some delicious"<<dessert;
  cout<<"for you,"<<name<<".\n";
  
}

void TestFour(void){
  
  cout<<"what year was your house bulid?\n";
  int year;
  cin>>year;
  cin.get();
  cout<<"what is your street address?\n";
  char address[100];
  cin.getline(address, 100);
  cout<<"year bulit:"<<year<<endl;
  cout<<"addree:"<<address<<endl;
  cout<<"Done!\n";
}
