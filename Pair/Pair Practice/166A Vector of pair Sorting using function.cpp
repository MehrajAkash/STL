#include<bits/stdc++.h>
using namespace std;

 bool com( pair<int,int>&p1, pair<int,int>&p2 ){

    if(p1.first > p2.first) return 1;
    else if(p1.first == p2.first) return (p1.second < p2.second);
    else return 0;

 }


int main(){

  int n,k,p,q,cnt=0;
  cin>>n>>k;

  vector< pair<int,int> > v;

  while(n--){
    cin>>p>>q;
    v.push_back({p,q});
  }

  sort(v.begin(), v.end(), com);

  for( auto u : v ){
    if( u == v[k-1] ) cnt++;
  }

  cout<<cnt<<endl;




return 0;
}
