// in this code it is normal deque without circular nature

#include<iostream>
using namespace std;

class deque{
   public:
    int *arr;
    int size;
    int front;
    int rear;

  deque(int size){
    arr= new int[size];
    this->size=size;
    front=-1;
    rear=-1;
  }

  void push_front(int value){
  if(front==0){
    cout<<"not possible to insert at front, already element present\n";
    return;
   }
    
  if(front==-1 && rear==-1){
      front=rear=0;
      arr[front]=value;
      return;
    }
  
  front--;
  arr[front]=value;

  }

void push_back(int value){

    if(size-1==rear){
      cout<<"full,not possible to insert\n";
      return;
    }
    if(front==-1 && rear==-1){
      front=rear=0;
      arr[rear]=value;
      return;
    }
    rear++;
    arr[rear]=value;
  }

void pop_front(){
   if(front==-1 && rear==-1){
      cout<<"empty,underflow\n";
      return;
    }
    if(front==rear){
      arr[front]=-1;
      front=rear=-1;
      return;
    }
    arr[front]=-1;
    front++;
  }

void pop_back(){
    if(front==-1 && rear==-1){
      cout<<"empty,underflow\n";
      return;
    }
    if(front==rear){
      arr[front]=-1;
      front=rear=-1;
      return;
    }
    arr[rear]=-1;
    rear--;
  }

int getFront(){
  if(front==-1){
    cout<<"empty, so no front exists\n";
    return -1;
  }
  return arr[front];
}

int getRear(){
   if(rear==-1){
    cout<<"empty, so no rear exists\n";
    return -1;
  }
  return arr[rear];
}

bool isEmpty(){
    if(rear==-1 && front==-1){
    cout<<"empty\n";
    return true;
  }
  return false;
}

int getSize(){
  if(rear==-1 && front==-1){
    cout<<"empty \n";
    return 0;
    }
    return (rear-front+1);
}

};

int main(){

deque dq(5);

dq.push_back(10);
dq.push_front(20);
dq.push_front(30);
dq.push_front(40);

dq.pop_back();
dq.pop_front();

cout<<dq.getSize()<<endl;

cout<<dq.getFront()<<endl;

cout<<dq.getRear()<<endl;


  return 0;
}