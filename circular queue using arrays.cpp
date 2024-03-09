#include<iostream>
using namespace std;

class cque{

int*arr;
int front;
int rear;
int size;

public:
//ctor
cque(int n){
arr=new int[n];
size=n;
front=-1;
rear=-1;
}

/*             method 1=> without using modulo

void push(int value){

  if((front==0 && rear==size-1)||(rear==front-1)){
      cout<<"full,not possible to insert\n";
      return;
    }
    if(front==-1 && rear==-1){
      front=rear=0;
      arr[rear]=value;
      return;
    }
    if(rear!=size-1 && front==0){
      front=size-1; arr[front]=value;
      return;
    }
    if(rear+1 !=front){
      front--;
      arr[front]=value;
      return;
    }
}

void pop(){
  // underflow , single element, circular flow,  normal case
    if(front==-1 && rear==-1){
      cout<<"empty,underflow\n";
      return;
    }
    if(front==rear){
      arr[front]=-1;
      front=rear=-1;
      return;
    }
    if(rear==0){
      arr[rear]=-1;
      rear=size-1;
      return;
    }
    arr[rear]=-1;
    rear--;
}

*/

};





/*          method 2=> using modulo     

void push(int value){
  //overflow
  if((rear+1)%size==front){
    cout<<"queue is full, overflow condition"<<endl;
    return;
  }
  //case of empty
  if(front==-1 && rear==-1){
      front=rear=0;
      arr[rear]=value;
      return;
    }
// now for all cases
   rear=(rear+1)%size;
   arr[rear]=value;
}


void pop(){

if(front==-1 && rear==-1){
      cout<<"empty,underflow\n";
      return;
    }
    if(front==rear){
      arr[front]=-1;
      front=rear=-1;
      return;
    }
    front=(front+1)%size;

}



*/


