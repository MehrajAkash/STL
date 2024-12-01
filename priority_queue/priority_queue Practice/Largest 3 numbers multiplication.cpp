#include<bits/stdc++.h>
using namespace std;

const int mx = 1e5+123;
int arr[mx];

int main(){

  int n,val,a,b,c;
  long long ans;
  cin>>n;
  arr[n];

  for( int i=0;i<n;i++){
    cin>>arr[i];
  }

  priority_queue<int>pq;
  for( int i=0;i<n;i++){


    pq.push(arr[i]);

    if(pq.size()<3){
        cout<<"-1"<<endl;
    }
    else{
        a = pq.top();
        pq.pop();

        b = pq.top();
        pq.pop();

        c = pq.top();
        pq.pop();

        ans = (a*b*c);

        cout<<ans<<endl;
        ans=1;

        pq.push(a);
        pq.push(b);
        pq.push(c);
    }

  }

return 0;
}
