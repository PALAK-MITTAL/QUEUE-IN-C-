#include<iostream>
#include<deque>  // isme dono sides se push and pop operations kar sakte hain
using namespace std;

int main(){

//creation
deque<int>dq;  

//push operations
dq.push_back(10);
dq.push_back(20);
dq.push_front(30);
dq.push_front(40);

//pop operations
dq.pop_back();
dq.pop_front();

//to get size
cout<<"size of deque: "<<dq.size()<<endl;

//to get front element
cout<<"front element is: "<<dq.front()<<endl;

// to get back element
cout<<"back element is: "<<dq.back()<<endl;

// to check for empty
if(dq.empty()){
  cout<<"dq is empty"<<endl;
}
else{
  cout<<"dq is not empty"<<endl;
}


  return 0;
}
