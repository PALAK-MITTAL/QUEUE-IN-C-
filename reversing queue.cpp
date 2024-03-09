/*               method 1=>stacks ka use karkar

#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reversing_queue(queue<int>&q){
   stack<int>s;
   while (!q.empty())
   {
    s.push(q.front());
    q.pop();
   }
   while(!s.empty()){
    q.push(s.top());
    s.pop();
   }
}

int main(){

queue<int>q;
q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);
q.push(60);
q.push(70);
q.push(80);

reversing_queue(q);

cout<<"printing the reversed queue:"<<endl;
while(!q.empty()){
  int ele=q.front();
  q.pop();
  cout<<ele<<" ";
}
  return 0;
}


// approach hai ki phele ham queue ke sare elements stack mein daalenge aur us element ko queue se pop kar denge then ek ek karke stack se pop karenge aur popped element ko quue me push kar denge

*/


/*            method 2=> recursion ka use karkar

#include<iostream>
#include<queue>
using namespace std;

void reversing_queue(queue<int>&q){
   if(q.empty()){
    return;
   }
   int temp=q.front();
   q.pop();
   reversing_queue(q);
   q.push(temp);
}


int main(){

queue<int>q;
q.push(10);
q.push(20);
q.push(30);
q.push(40);
q.push(50);
q.push(60);
q.push(70);
q.push(80);

reversing_queue(q);

cout<<"printing the reversed queue:"<<endl;
while(!q.empty()){
  int ele=q.front();
  q.pop();
  cout<<ele<<" ";
}
  return 0;
}


// 
// 




*/




/*     method3=>using extra space as to store elements in array

ek approach ye bhi ho sakti hai ki queue ke sare elements ek array me store karalo aur queue se element ko pop karte jao aur jab queue empty ho jaye tab array mein last wale element se queue me push karna start kar do then jo elements ab queue mein honge woh ab revrsal order me honge

//int n=q.size();
// int ans[n];
//int i=0;
// while(n){
//   ans[i++]=(q.front());
//   q.pop();
//   n--;
// }
// for(int i=n;i>=0;i--){
//   q.push(ans[i]);
// }

*/