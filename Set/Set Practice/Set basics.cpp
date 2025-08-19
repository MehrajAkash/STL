#include<bits/stdc++.h>
using namespace std;
int main(){

    set<int> s = {1, 1, 2, 1, 3 };

    cout<< s.size() <<endl; /// 3
    for( auto u : s)cout<< u <<" ";/// 1 2 3
    cout<<endl;

    set<int> :: iterator it;
    for( it = s.begin(); it != s.end(); it++ ) cout<<*it<<" ";/// 1 2 3
    cout<<endl;

    s.clear();
    cout<< s.empty() << endl; /// 1

    s.insert(3);
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(1);
    s.insert(1);

    cout<< s.size() <<endl; /// 3

    for( auto u : s ) cout<< u <<" "; /// 1 2 3
    cout<<endl;

    cout<< s.count( 1 )<<endl; /// 1
    cout<< s.count( 2 )<<endl; /// 1
    cout<< s.count( 11 )<<endl; /// 0

    /// front element
    cout<< *s.begin() <<endl; /// 1

    /// last element in the set
    cout<< *( --s.end() )<<endl; /// 3
    cout<< *s.rbegin() <<endl; /// 3

    /// erase an element
    s = {1, 2, 2, 3, 4, 5};

    s.erase( 2 );
    cout<<s.size() <<endl; /// 4

    for( auto u : s ) cout<< u <<" "; /// 1 3 4 5
    cout<<endl;

    /// Erasing front element in set

    s = { 1, 2, 3, 4, 5, 6 };

    s.erase( s.begin() );
    cout<< s.size() <<endl; /// 5

    for( auto u : s ) cout<< u <<" "; /// 2 3 4 5 6
    cout<<endl;

    /// Erasing back element in set
    s = {1, 2, 3, 4, 5, 6};

    s.erase( --s.end() );

    cout<< *( --s.end() ) <<endl; /// 5
    cout<< s.size() <<endl; /// 5

    for( auto u : s ) cout<< u << " "; /// 1 2 3 4 5
    cout<<endl;


    /// set of pair
    set< pair<int,int> > s1;

    s1.insert( {1,2} );
    s1.insert( {1,2} );
    s1.insert( {4,2} );
    s1.insert( {4,3} );
    s1.insert( {4,3} );
    s1.insert( {2,2} );

    cout<< s1.size() <<endl;/// 4
    for( auto u : s1 ) cout<< u.first <<" "<< u.second <<endl;
    /**
    output:
    1 2
    2 2
    4 2
    4 3
    **/

    /// set of string
    set<string>s2;

    s2.insert("momo");
    s2.insert("momo");
    s2.insert("prety");
    s2.insert("akash");
    s2.insert("prova");

    cout<< s2.size() <<endl; /// 4
    for( auto u : s2 ) cout<< u <<endl;
    /**
    akash
    momo
    prety
    prova
    **/

    /// set in descending order
    set<int, greater<int> > s3 = { 3, 4, 1, 2 };
    for( auto u : s3 ) cout<< u <<" "; /// 4 3 2 1
    cout<<endl;

    set<string, greater<string> > s4 = {"momo","momo","prety","akash","prova"};
    for( auto u : s4 ) cout<< u <<endl;
    /***
    prova
    prety
    momo
    akash
    ***/



    set< pair<int,int>, greater<pair<int,int>> > s5;

    s5.insert ( { 1, 2} );
    s5.insert ( { 1, 2 } );
	s5.insert ( { 4, 2 } );
	s5.insert ( { 4, 3 } );
	s5.insert ( { 2, 2 } );
	s5.insert ( { 2, 1 } );

	for( auto u : s5 ) cout<<u.first<<' '<<u.second<<endl;
        /**
        4 3
        4 2
        2 2
        2 1
        1 2
        **/





return 0;
}
