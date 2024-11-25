
#include<bits/stdc++.h>
using namespace std;


int main(){

   int n,k;
   cin>>n>>k;
   vector< pair<int,int> >v(n);

   for(int i=0;i<n;i++){

        cin>>v[i].first >> v[i].second;
        v[i].first = v[i].first*-1;

   }

   sort( v.begin(),v.end() );

   int ans=0;

   for(auto u : v){
       /// cout<< u.first*-1 <<" "<<u.second<<endl;
     if(u == v[k-1]) ans++;
   }

   cout<<ans<<endl;


return 0;
}
