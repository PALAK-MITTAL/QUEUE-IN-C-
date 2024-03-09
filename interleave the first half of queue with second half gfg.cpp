// input=>    10 20 30 40 50 60 70 80
// output=>   10 50 20 60 30 70 40 80

/*                question

You are given a queue Q of N integers of even length, rearrange the elements by interleaving the first half of the queue with the second half of the queue.

 

Example 1:

Input:
N = 4
Q = {2,4,3,1}
Output:
{2,3,4,1}
Explanation:
After the mentioned rearrangement of the first half
and second half, our final queue will be {2,3,4,1}.
 

Example 2:

Input:
N = 2
Q = {3,5}
Output:
{3,5}
Explanation:
After the mentioned rearrangement of the first half
and second half, our final queue will be {3,5}.
 

Your Task:

You don't need to read input or print anything. Your task is to complete the function rearrangeQueue() which takes a queue Q as input and returns the modified queue after the rearrangement.

*/

/*               solution


//{
 
approach hai ki ham queue ko 2 parts me break kar denge then arrange kar denge elements ko ya toh array me ya ek nayi queue me ya phir ham usi queue me bhi kar sakte hai(logic is provided in below code)

//}

 vector<int> rearrangeQueue(queue<int> &q){
        int n=q.size();
        queue<int>first;
        for(int i=0;i<n/2;i++){
            first.push(q.front());
            q.pop();
        }
        queue<int>second;
        for(int i=0;i<n/2;i++){
            second.push(q.front());
            q.pop();
        }
        vector<int>ans;
        for(int i=0;i<n/2;i++){
            ans.push_back(first.front());
            first.pop();
            
            ans.push_back(second.front());
            second.pop();
        }
        return ans;
    }


*/