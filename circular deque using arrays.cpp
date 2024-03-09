//  this code  is for normal as well as circular deque 

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
    // case of full 
   if((front==0 && rear==size-1)||(rear==front-1)){ //or we can say that[(rear+1)%size==front]
      cout<<"full,not possible to insert\n";
      return;
    }
    // case of empty
    if(front==-1 && rear==-1){
      front=rear=0;
      arr[rear]=value;
      return;
    }
    // jab front zero par ho  aur rear kahin beech me ho
    if(rear!=size-1 && front==0){
      front=size-1; arr[front]=value;
      return;
    }
    //jab rear me ek plus karne par front na aaye matlab jab front kahin beech me ho starting me na ho
    if(rear+1 !=front){
      front--;
      arr[front]=value;
      return;
    }

//{    ek dusra method bhi hai push_front function ke liye
    // case1: isEmpty   case2: isfull  
    // case3: else
    //front=(front-1+size)%size;   arr[front]=value; return;
//  }
}

  

void push_back(int value){
// case1: if queue is full
    if((front==0 && rear==size-1)||(rear==front-1)){
      cout<<"full,not possible to insert\n";
      return;
    }
    //case2: if empty queue
    if(front==-1 && rear==-1){
      front=rear=0;
      arr[rear]=value;
      return;
    }
     //case3: jab front zero par na ho  aur rear kahin end me ho
    if(rear==size-1 && front!=0){
      rear=0;
      arr[rear]=value;
      return;
    }
    else{
      //case4: jab front aur rear dono beech me ho aur queue empty ho
    if((rear+1)!=front) {
      rear++;arr[rear]=value;
    }
  }
  //{    ek dusra method bhi hai push_front function ke liye
    // case1: isEmpty   case2: isfull  
    // case3: else
    //rear=(rear+1)%size;   arr[rear]=value; return;
//  }
}
void pop_front(){
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
    if(front==size-1){
      arr[front]=-1;
      front=0;
      return;
    }
    arr[front]=-1;
    front++;

//{    ek dusra method bhi hai push_front function ke liye
    // case1: isEmpty   case2: single element  
    // case3: else
    //front=(front+1)%size;  return;
//  }

  }

void print(){
  for(int i=0;i<=size;i++){
    cout<<arr[i]<<' ';
  }
  cout<<endl;
}

void pop_back(){
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

//{    ek dusra method bhi hai push_front function ke liye
    // case1: isEmpty   case2: single element  
    // case3: else
    //rear=(rear-1+size)%size;  return;
//  }

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

bool isFull(){
  return ((rear+1)%size==front);
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

cout<<dq.getFront()<<endl;

cout<<dq.getRear()<<endl;


  return 0;
}