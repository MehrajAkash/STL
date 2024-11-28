
#include<bits/stdc++.h>
using namespace std;

int main(){
    multiset<int>s;

    s.insert( 1 );
    s.insert(2);
    s.insert(1);
    s.insert(2);
    s.insert(3);

    cout<<s.size()<<endl; /// 5
    for( auto u : s ) cout<< u <<" ";/// 1 1 2 2 3
    cout<<endl;

    cout<< s.count(1) <<endl;/// 2
    cout<< s.count(2) <<endl;/// 2

    s.erase(1);
    for( auto u : s )cout<<u<<" ";/// 2 2 3
    cout<<endl;

    cout<< s.size() <<endl;/// 3

    s = {2, 3, 3, 4};

    auto it = s.find( 2 );
    s.erase( it );

    for( auto u : s ) cout<<u<<" ";/// 3 3 4
    cout<<endl;






return 0;
}
