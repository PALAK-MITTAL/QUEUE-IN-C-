#include<iostream>
#include<deque>
using namespace std;


class queues{
   public:
   deque<int>d;

   void push(int val){
    d.push_back(val);
   }

   void pop(){
    d.pop_front();
   }

   int getFront(){
    if(d.empty()){
      return -1;
    }
    return d.front();
   }

  int getRear(){
     if(d.empty()){
      return -1;
    }
    return d.back();
  }

};