//{ Driver Code Starts
// Initial Template for C++

// CPP code to implement dequeue functions
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

// dq : deque in which element is to be pushed
// x : element to be pushed

// Function to push element x to the back of the deque.
void push_back_pb(deque<int> &dq, int x) {
    // Your code here
    dq.push_back(x);

}

// Function to pop element from back of the deque.
void pop_back_ppb(deque<int> &dq) {
    if (!dq.empty())
         dq.pop_back();
        /*Your code here*/


        else return;
}

// Function to return element from front of the deque.
int front_dq(deque<int> &dq) {
    if (!dq.empty()){
        return dq.front();
    }

        /*Your code here*/
        else return -1;
}

// Function to push element x to the front of the deque.
void push_front_pf(deque<int> &dq, int x) {

    dq.push_front(x);

    // Your code here
}

//{ Driver Code Starts.

// Driver code
int main() {

    int testcase;
    cin >> testcase;

    // declaring deque
    deque<int> dq;

    while (testcase--) {

        int queries;
        cin >> queries;

        while (queries--) {
            string s;
            cin >> s;

            // if query is to push back
            if (s == "pb") {
                int x;
                cin >> x;
                push_back_pb(dq, x);
                cout << dq.back() << endl;
            }

            // if query is to push front
            if (s == "pf") {
                int x;
                cin >> x;
                push_front_pf(dq, x);
                cout << dq.front() << endl;
            }

            // if query is to pop back
            if (s == "pp_b") {
                pop_back_ppb(dq);
                cout << dq.size() << endl;
            }

            // if query is to return front
            if (s == "f") {
                int x = front_dq(dq);
                cout << x << endl;
            }
        }
        dq.clear();

cout << "~" << "\n";
}

    return 0;
}
// } Driver Code Ends
/***

A deque is a double-ended queue that allows enqueue and dequeue operations from both the ends.

Given a deque and q queries. The task is to perform some operation on dequeue according to the queries as given below:
1. pb: query to push back the element x.
2. pf: query to push element x(given with query) to the front of the deque.
3. pp_b(): query to delete element from the back of the deque.
4. f: query to return a front element from the deque.

Examples:

Input: queries = [[ pf 5 ],[ pf 10 ],[ pb 6 ],[ f ],[ pp_b ]]
Output: 10
Explanation:
1. After push front deque will be {5}
2. After push front deque will be {10, 5}
3. After push back deque will be {10, 5, 6}
4. Return front element which is 10
5. After pop back deque will be {10, 5}
Input: queries = [[ pf 5 ],[ f ]]
Output: 5
Explanation:
1. After push front deque will be {5}
2. Return front element which is 5

**/
