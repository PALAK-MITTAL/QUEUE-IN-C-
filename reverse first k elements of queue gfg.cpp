/*           question gfg

Given an integer K and a queue of integers, we need to reverse the order of the first K elements of the queue, leaving the other elements in the same relative order.

Only following standard operations are allowed on queue.

enqueue(x) : Add an item x to rear of queue
dequeue() : Remove an item from front of queue
size() : Returns number of elements in queue.
front() : Finds front item.
Note: The above operations represent the general processings. In-built functions of the respective languages can be used to solve the problem.

Example 1:

Input:
5 3
1 2 3 4 5
Output: 
3 2 1 4 5
Explanation: 
After reversing the given
input from the 3rd position the resultant
output will be 3 2 1 4 5.
Example 2:

Input:
4 4
4 3 2 1
Output: 
1 2 3 4
Explanation: 
After reversing the given
input from the 4th position the resultant
output will be 1 2 3 4.
Your Task:
Complete the provided function modifyQueue() that takes queue and K as parameters and returns a modified queue. The printing is done automatically by the driver code.

Expected Time Complexity : O(N)
Expected Auxiliary Space : O(K)

*/


/*             solution

//{
  approach ye hai ham k tak ke elements queue ke stack me store kara le aur phir un elements ko queue me push kar de aur phir jo elements queue me aage the unhe push kare aur pop bhi karte chale saath ke saath ab jo hamari queue hogi woh vaisi hogi jasi hame chahiye
}

queue<int> modifyQueue(queue<int> q, int k) {

        //push first k elements in stack
        stack<int>s;
        while(k--){
            s.push(q.front());
            q.pop();
        }
        //store size of queue
        int n=q.size();
        //push elements from stack to queue
        while(!s.empty()){
            q.push(s.top());
            s.pop();
        }
        //push first n elements of queue at last
        while(n--){
            q.push(q.front());
            q.pop();
        }
        
        return q;
    }


*/

/*     method2=>brute approach

ek approach ye bhi ho sakti hai ki ham k tak ke elements queue ke stack me store kara le aur baki ke bache elements array me phir jab queue empty ho jayegi tab phele stack se element queue me push kare jab stack khali ho jaye phir array me se har element ko queue me push kar de

*/