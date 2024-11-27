#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    string s;
    map<string, int> m;

    while(n--){
        cin>>s;
        m[s]++;

        if( m[s] > 1 ) cout<<s<< (m[s]-1) <<endl;
        else cout<<"OK"<<endl;
    }


   return 0;
}
