#include<bits/stdc++.h>
using namespace std;

int main(){

  int t,n,x;
  cin>>t;

  while(t--){

    cin>>n>>x;

     vector<int>arr(n);

    for(int i=0; i<n; i++) cin>>arr[i];


    sort( arr.begin(), arr.end() );
     int m = unique( arr.begin(), arr.end() ) - arr.begin();

     if(x == m)cout<<"Good"<<endl;
     else if( m > x) cout<<"Average"<<endl;
     else cout<<"Bad"<<endl;

  }


  return 0;
}
