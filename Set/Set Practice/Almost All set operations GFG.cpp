
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

void insert(set<int> &s,int x);

void print_contents(set<int> &s);

void erase(set<int> &s,int x);

int find(set<int> &s,int x);

int size(set<int> &s);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		set<int> s;
		int q;
		cin>>q;
		while(q--)
		{
			char c;
			cin>>c;
			if(c=='a')
			{
				int x;
				cin>>x;
				insert(s,x);
			}
			if(c=='b')
			{
				print_contents(s);
			}
			if(c=='c')
			{
				int x;
				cin>>x;
				erase(s,x);
			}
			if(c=='d')
			{
				int x;
				cin>>x;
				cout<<find(s,x)<<" ";
			}
                       if(c=='e')
                       cout<<size(s)<<" ";

		}
cout<<endl;

cout << "~" << "\n";
}
	return 0;
}
// } Driver Code Ends


/* You are required to complete below methods */

/*inserts an element x to the set s */
void insert(set<int> &s,int x)
{
    //Your code here
    s.insert(x);
}

/*prints the contents of the set s */
void print_contents(set<int> &s)
{
    //Your code here
    for(auto u : s ) cout<<u<<" ";
}

/*erases an element x from the set s */
void erase(set<int> &s,int x)
{
    //Your code here
    if( s.count(x) )
           s.erase(x);
}

/*returns 1 if the element x is
present in set s else returns -1 */
int find(set<int> &s,int x)
{
    //Your code here
    if( s.count(x) == 1 ) return 1;
    else return -1;
}

/*returns the size of the set s */
int size(set<int> &s)
{
   //Your code here
   return s.size();
}

/***
Input:
The first line of input contains an integer T denoting the no of test cases . Then T test cases follow. The first line of input contains an integer Q denoting the no of queries . Then in the next line are Q space separated queries .
A query can be of four types
1. a x (inserts an element x to the set s)
2. b (prints the contents of the set s)
3. c x (erases an element x from the set s)
4. d x (prints 1 if the element x is present in the set else print -1)
5. e (prints the size of the set s)

Output:
The output for each test case will  be space separated integers denoting the results of each query .

Constraints:
1<=T<=100
1<=Q<=100

Example:

Input
2
6
a 1 a 2 a 3 b c 2 b
5
a 1 a 5 e d 5 d 2

Output
1 2 3 1 3
2 1 -1

**/
