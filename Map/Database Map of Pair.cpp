
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t1,a,b;
    int t2,n;
    cin>>t1;
    for(int i=1; i<=t1; i++){
            int im = 0;

        map< pair<int,int>, int > m;
        cin>>t2>>n;

        while(n--){
            cin>>a>>b;
            /// cout<<m[{a,b}]<<" "<<endl;  0
            m[{a,b}]++;

            if( m[{a,b}] > 1 ) im = 1;

        }

     /*   for(auto u : m){
          //  cout<<u.second<<endl;
            if(u.second > 1) im = 1;
        } */

        if( im == 0 ) cout<<"Scenario #"<<i<<": possible"<<endl;
        else cout<<"Scenario #"<<i<<": impossible"<<endl;
    }


    return 0;
}
