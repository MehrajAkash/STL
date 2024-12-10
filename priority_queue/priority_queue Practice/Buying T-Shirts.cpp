#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

 const int mx = 2e5+123;
 int a[mx];
 int b[mx];
 int p[mx];

int main(){

  optimize();
  int n;
  cin>>n;
  for(int i=1; i<=n; i++) cin>>p[i];
  for(int i=1; i<=n; i++) cin>> a[i];
  for(int i=1; i<=n; i++) cin>>b[i];

  priority_queue<int, vector<int>, greater<int> > q[5][5];

  for(int i=1; i<=n; i++ ){
    q[a[i]][b[i]].push( p[i] );
  }

  int m;
  cin>>m;

  while( m-- ){
    int c;
    cin>>c;

    int ans = INT_MAX;
    int f, b;

    for( int i=1; i<=3; i++ ){
        if( !q[c][i].empty() && q[c][i].top() < ans ){
            ans = q[c][i].top();
            f = c, b = i;
        }
    }

    for( int i=1; i<=3; i++ ){
        if( !q[i][c].empty() && q[i][c].top() < ans ){
            ans = q[i][c].top();
            f = i; b = c;
        }
    }

    if( ans == INT_MAX ) ans = -1;
    else{
        q[f][b].pop();
    }

    cout<<ans<<" ";

  }

    cout<<endl;

return 0;
}
/**
A new pack of n t-shirts came to a shop. Each of the t-shirts is characterized by three integers pi, ai and bi, where pi is the price of the i-th t-shirt, ai is front color of the i-th t-shirt and bi is back color of the i-th t-shirt. All values pi are distinct, and values ai and bi are integers from 1 to 3.

m buyers will come to the shop. Each of them wants to buy exactly one t-shirt. For the j-th buyer we know his favorite color cj.

A buyer agrees to buy a t-shirt, if at least one side (front or back) is painted in his favorite color. Among all t-shirts that have colors acceptable to this buyer he will choose the cheapest one. If there are no such t-shirts, the buyer won't buy anything. Assume that the buyers come one by one, and each buyer is served only after the previous one is served.

You are to compute the prices each buyer will pay for t-shirts.

Input
The first line contains single integer n (1 ≤ n ≤ 200 000) — the number of t-shirts.

The following line contains sequence of integers p1, p2, ..., pn (1 ≤ pi ≤ 1 000 000 000), where pi equals to the price of the i-th t-shirt.

The following line contains sequence of integers a1, a2, ..., an (1 ≤ ai ≤ 3), where ai equals to the front color of the i-th t-shirt.

The following line contains sequence of integers b1, b2, ..., bn (1 ≤ bi ≤ 3), where bi equals to the back color of the i-th t-shirt.

The next line contains single integer m (1 ≤ m ≤ 200 000) — the number of buyers.

The following line contains sequence c1, c2, ..., cm (1 ≤ cj ≤ 3), where cj equals to the favorite color of the j-th buyer. The buyers will come to the shop in the order they are given in the input. Each buyer is served only after the previous one is served.


Output
Print to the first line m integers — the j-th integer should be equal to the price of the t-shirt which the j-th buyer will buy. If the j-th buyer won't buy anything, print -1.

Examples
Input:
5
300 200 400 500 911
1 2 1 2 3
2 1 3 2 1
6
2 3 1 2 1 1
Output:
200 400 300 500 911 -1

Input:
2
1000000000 1
1 1
1 2
2
2 1
Output:
1 1000000000

**/
