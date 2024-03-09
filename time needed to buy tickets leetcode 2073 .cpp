/*    question

There are n people in a line queuing to buy tickets, where the 0th person is at the front of the line and the (n - 1)th person is at the back of the line.

You are given a 0-indexed integer array tickets of length n where the number of tickets that the ith person would like to buy is tickets[i].

Each person takes exactly 1 second to buy a ticket. A person can only buy 1 ticket at a time and has to go back to the end of the line (which happens instantaneously) in order to buy more tickets. If a person does not have any tickets left to buy, the person will leave the line.

Return the time taken for the person at position k (0-indexed) to finish buying tickets.

 

Example 1:

Input: tickets = [2,3,2], k = 2
Output: 6
Explanation: 
- In the first pass, everyone in the line buys a ticket and the line becomes [1, 2, 1].
- In the second pass, everyone in the line buys a ticket and the line becomes [0, 1, 0].
The person at position 2 has successfully bought 2 tickets and it took 3 + 3 = 6 seconds.
Example 2:

Input: tickets = [5,1,1,1], k = 0
Output: 8
Explanation:
- In the first pass, everyone in the line buys a ticket and the line becomes [4, 0, 0, 0].
- In the next 4 passes, only the person in position 0 is buying tickets.
The person at position 0 has successfully bought 5 tickets and it took 4 + 1 + 1 + 1 + 1 = 8 seconds.

*/

/*             solution1  time complexity in worst case is of O(n^2)  
    example 5 5 5 5 5 5 5 5  (given)   and calculate for last person

 int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int>q;
        int n=tickets.size();
        int time=0;
        //queue ke andar sare index daal do
        for(int i=0;i<n;i++){
            q.push(i);
        }
        //ab compare karo aur time calculate karo
        while(tickets[k]!=0){
            tickets[q.front()]--;
            time++;
            if(tickets[q.front()]){
                q.push(q.front());
            }
            q.pop();
        }
        return time;
    }


*/


/*                   solution2 time complexity is of O(n)

 int timeRequiredToBuy(vector<int>& tickets, int k) {
        
        int n=tickets.size();
        int time=0;
        //ek baar phele ticket given at kth index tak
        for(int i=0;i<=k;i++){
            time+=min(tickets[i],tickets[k]);
        }
        //now for after kth index
         for(int i=k+1;i<n;i++){
            time+=min(tickets[i],tickets[k]-1);
        }
        return time;
    }


*/
