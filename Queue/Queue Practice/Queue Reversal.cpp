//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//function Template for C++

//Function to reverse the queue.
class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        // add code here.
        queue<int> retq;
        stack<int> ns;

        while( !q.empty() ){
            ns.push( q.front() );
            q.pop();
        }

        while( !ns.empty() ){
            retq.push( ns.top() );
            ns.pop();
        }

        return retq;

    }
};


//{ Driver Code Starts.
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
    queue<int> q;
    int n, var;
    cin>>n;
    while(n--)
    {
        cin>>var;
        q.push(var);
    }
    Solution ob;
    queue<int> a=ob.rev(q);
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl;

cout << "~" << "\n";
}
}
// } Driver Code Ends

/**
Input:
6
4 3 1 10 2 6
Output:
6 2 10 1 3 4
Explanation:
After reversing the given elements of the queue , the resultant queue will be 6 2 10 1 3 4.
**/
