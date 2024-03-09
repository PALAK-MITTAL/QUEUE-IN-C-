#include<iostream>
using namespace std;

class node{
public:
int data;
node*next;
//ctor
node(int val){
data=val;
next=NULL;
}
};

class que{
public:
node* front;
node*rear;

que(){
front=rear=NULL;
}

bool isEmpty(){
  return (front==NULL);
}

void push(int value){

if(isEmpty()){
  front=new node(value);
  rear=front;
  return;
}
rear->next= new node(value);
rear=rear->next;

}

void pop(){

  if(isEmpty()){
    cout<<"queue underflow, not possible to delete\n";
    return;
  }
  node*temp=front;
  front=front->next;
  delete temp;

}

int peek(){
   if(isEmpty()){
    cout<<"queue empty, not possible to get starting element\n";
    return -1;
  }
  return front->data;
}

int back(){
  if(isEmpty()){
    cout<<"queue empty, not possible to get ending element\n";
    return -1;
  }
  return rear->data;
}

};

int main(){

que q;
q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);
q.pop();
cout<<q.peek()<<endl;
cout<<q.back()<<endl;
cout<<q.isEmpty()<<endl;

  return 0;
}
