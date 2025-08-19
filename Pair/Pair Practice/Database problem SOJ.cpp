#include<bits/stdc++.h>
using namespace std;

int main(){

    int t1,t2,n;

    int f,s;
    cin>>t1;

    for(int i=1;i<=t1;i++){
        vector<pair<int,int> >vec;
        cin>>t2>>n;
        int tmp = n;

         while(tmp--){
            cin>>f>>s;

            vec.push_back({f,s});
        }
        sort( vec.begin(),vec.end() );
        int sz = unique( vec.begin(), vec.end() ) - vec.begin();

        cout<<"sz = "<<sz<<endl;

        if(sz==n) cout<<"Scenario #"<<i<<": possible"<<endl;

        else cout<<"Scenario #"<<i<<": impossible"<<endl;
    }


return 0;
}
