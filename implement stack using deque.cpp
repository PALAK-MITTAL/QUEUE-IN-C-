#include<iostream>
#include<deque>
using namespace std;


class STACK{
   public:
   deque<int>d;
   void push(int val){
    d.push_back(val);
   }
   void pop(){
    d.pop_back();
   }
   int top(){
    if(d.empty()){
      return -1;
    }
    return d.back();
   }
};