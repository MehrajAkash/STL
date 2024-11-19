#include<bits/stdc++.h>
using namespace std;

int main(){

    vector< vector<int> > v;

    vector<int> a1 = {2, 3, 4};
    vector<int> a2 = {6, 7, 8};

    v.push_back( a1 );
    v.push_back( a2 );

    for( auto u : v){
        for(auto x : u) cout<< x << " ";
        cout<<endl;
    }










  return 0;
}
