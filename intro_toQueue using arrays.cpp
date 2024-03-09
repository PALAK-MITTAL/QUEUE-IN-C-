// the time complexity for each operation(function) is O(1)

#include<iostream>
using namespace std;

class que{

int*arr;
int front;
int rear;
int size;

public:
//ctor
que(int n){
arr=new int[n];
size=n;
front=-1;
rear=-1;
}

int getSize(){
 // this will return the size of array
  if(!isEmpty()) return rear-front+1;
  else return 0;
}

bool isFull(){
  if(rear==size-1){
    cout<<"queue is full"<<endl;
    return true;
  }
  return false;
}

bool isEmpty(){
  if(front!=-1){
    cout<<"queue is not empty"<<endl;
    return false;
  }
  return true;
}

void pop(){
  if(isEmpty()){
    cout<<"queue underflow, not possible to delete"<<endl;
    return;
  }
  if(front==rear){
    front=rear=-1;
    return;
  }
  cout<<arr[front]<<"is deleted\n";
  front++;
  return;
}

int peek(){ // returns the front element
  if(isEmpty()){
    cout<<"not possible to get starting element"<<endl;
    return -1;
  }
  return arr[front];
}

int getRear(){ // returns the last element of queue
 if(isEmpty()){
    cout<<"not possible to get rear element"<<endl;
    return -1;
  }
  return arr[rear];

}

void push(int data){
  if(isFull()){
    cout<<"queue overflow, not possible to insert\n";
    return;
  }
  if(front==-1){
    front=rear=0;
    arr[front]=data;
    rear=front;
    return;
  }
  rear++;
  arr[rear]=data;
  return;
}
//this will print array from front to rear
void display(){
  cout<<"printing the queue"<<endl;
  for(int i=front;i<=rear;i++){
    cout<<arr[i]<<" "<<endl;
  }
}

};

int main(){

que queue(5);

queue.push(10);
queue.push(20);
queue.push(30);
queue.push(40);

cout<<"size of queue:"<<queue.getSize()<<endl;
queue.pop();

queue.display();
cout<<"size of queue:"<<queue.getSize()<<endl;
cout<<queue.peek()<<endl;

queue.pop();
queue.pop();
queue.pop();
cout<<"size of queue:"<<queue.getSize()<<endl;


return 0;

}