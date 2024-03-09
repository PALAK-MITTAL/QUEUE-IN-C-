#include<iostream>
using namespace std;

class node{
  public:
  int data;
  node*next;
  node*prev;
  node(int data){
     this->data=data;
     next=NULL;
     prev=NULL;
  }
};

class deque{
   public:
   node*front, *rear;
  deque(){
    node*front=NULL;
    node*rear=NULL;
  }

  void push_front(int value){
      if(front==NULL){
        front=rear=new node(value);
        return;
      }
      if(front->next==NULL){
        node*temp=new node(value);
        temp->next=front;
        front->prev=temp;
        front=temp;
        rear=front->next;
        return;
      }
       node*temp=new node(value);
       temp->next=front;
       front->prev=temp;
       front=temp;
  }

void push_back(int value){
    if(rear==NULL){
        front=rear=new node(value);
        return;
      }
      if(rear->prev==NULL){
        node*temp=new node(value);
        temp->prev=rear;
        rear->next=temp;
        front=rear;
        rear=temp;
        return;
      }
       node*temp=new node(value);
        temp->prev=rear;
        rear->next=temp;
       rear=temp;
  }

void pop_front(int value){
    if(front==NULL){
      cout<<"underflow,not possible to remove from front."<<endl;
      return;
    }
    if(front->next==NULL){
      cout<<"only one element present and now deleted, queue empty now\n";
      node*temp=front;
      delete temp;
      front=rear=NULL;
      return;
    }
    node*temp=front;
    front=front->next;
    temp->next=NULL;
    front->prev=NULL;
    delete temp;
  }

void pop_back(int value){
    if(rear==front==NULL){
      cout<<"underflow,not possible to remove from back."<<endl;
      return;
    }
    if(rear->prev==NULL){
      cout<<"only one element present and now deleted, queue empty now\n";
      node*temp=rear;
      delete temp;
      front=rear=NULL;
      return;
    }
    node*temp=rear;
    rear->prev->next=NULL;
    rear=rear->prev;
    temp->prev=NULL;
    delete temp;
  }

int getFront(){
   if(front==NULL) return -1;
   return front->data;
}

int getRear(){
   if(front==NULL) return -1;
   return rear->data;
}

bool isEmpty(){
   return(front==rear==NULL);
}

int getSize(){
  int count=0;
  node*temp=front;
  while(temp->next!=NULL){
    count++;
  }
  return count;
}

};



int main(){



  return 0;
}