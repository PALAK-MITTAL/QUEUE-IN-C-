//if we are asked to only print no matter whether the elements still present in queue or not
/*

while(!q.empty()){
  cout<<q.front()<<" ";
  q.pop();
}

*/



/*
//if we are asked to print the elements in a way that the elements still remain in the same order in the queue
//=>here the approach will be that we store the front value in a vector one by one after printing then pop that element from queue when queue gets empty we again push elements from vector to queue
// //*        method1=>when using extra space

// vector<int>ans;
// while(!q.empty()){
//   cout<<q.front()<<" ";
//   ans.push_back(q.front());
//   q.pop();
// }
// for(int i=0;i<ans.size();i++){
//   q.push(ans[i]);
// }
/// */

/*              method2=>without using extra space
// approach  ye hai ki ham element ko print karne ke baad use usi queue me push karenge aur pop kar denge aur jo ham print karenge woh originally ham queue ke size tak karenge 1 2 3 4| 1 2 ......

int size=q.size();
while(size){
  cout<<q.front()<<" ";
  q.push(q.front());
  q.pop();
  size--;
}


*/

//*/