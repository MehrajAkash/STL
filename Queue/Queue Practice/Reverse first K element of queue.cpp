

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
    public:

    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        // add code here.
        queue<int>qq;
        stack<int>ss;

        while(k--){
            ss.push( q.front() );
            q.pop();
        }

        while( !ss.empty() ){
             qq.push( ss.top() );
             ss.pop();
        }

        while( !q.empty() ){

            qq.push( q.front() );

            q.pop();
        }



        return qq;

    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        Solution ob;
        queue<int> ans = ob.modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;

     cout << "~" << "\n";
   }
}
// } Driver Code Ends
/**
Input:
5 3
1 2 3 4 5
Output:
3 2 1 4 5
Explanation:
After reversing the given
input from the 3rd position the resultant
output will be 3 2 1 4 5.
**/
