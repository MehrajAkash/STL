#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

      map<string, bool>m;
    while( n-- ){
        string s;
        cin>>s;

        if( m[s] == 1) cout<<"YES"<<endl;
        else cout<< "NO" <<endl;

        m[s] = 1;
    }


    return 0;
}
