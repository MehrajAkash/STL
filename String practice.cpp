#include<bits/stdc++.h>
using namespace std;
#define e 'endl';

int main(){

    string s = "abcd";
    cout<<s.size()<<endl;

    s += 'e';
    char c = 'f';
    s += c;

    cout<<s<<endl; /// abcdef

    string s2 = "gh";
    string tmp = s + s2;
    cout<<tmp<<endl; /// abcdefgh

    string :: iterator it;
    for( it = tmp.begin(); it != tmp.end(); it++ ) cout<< *it; /// abcdefgh
    cout<<endl;

    s = "abkba";
    tmp = s;

    reverse( tmp.begin(), tmp.end() );
    if( s == tmp )cout<< "Yes, Palindrome. "<<endl;
    else cout<<"No, not palindrome. "<<endl;

    s = "bcda";

    sort( s.begin(), s.end() ); // abcd
    cout<<s<<endl;

    s = "bcda";
    sort( s.rbegin(), s.rend() ); // dcba
    cout<<s<<endl;

    s = "bcda";
    sort( s.begin(), s.end(), greater<char>() ); // dcba
    cout<<s<<endl;

    s = "ddssaa";
    sort( s.begin(), s.end() );
    int n = unique( s.begin(), s.end() ) - s.begin(); // 3
    for(int i=0; i<n; i++) cout<< s[i];  // ads
    cout<<endl;

    s = "ddssaa";
    cout<< *max_element( s.begin(), s.end() ) <<endl; // s

    cout<< *min_element( s.begin(), s.end() ) <<endl; // a


    /// Sort some string on lexicographical order:
    vector<string>v;
    v.push_back("Muhammad");
    v.push_back( "Mohammad" );
    v.push_back ( "CPS Academy" );
    v.push_back( "COOK");
    v.push_back("cook");

    sort( v.begin(), v.end() );

    for( auto u : v ) cout<< u <<endl;
    /**
        COOK
        CPS Academy
        Mohammad
        Muhammad
        cook
    **/
    s = "jklm";
    s.pop_back();
    cout<< s <<endl; /// jkl
    s.clear();
    cout<<s.empty()<<endl; /// 1

    v = {"Jenith","Jenith","Akash","Dip","Dip","Akash"};
    sort( v.begin(), v.end() );
    int sz = unique( v.begin(), v.end() ) - v.begin();
    for( int i=0; i<sz; i++) cout<< v[i]<<" "; /// prints all unique elements
    cout<<endl;

    /// integer to string convert
    int num = 123;
    s = to_string(num);
    cout<<s<<endl;
    s[0] = '3';
    cout<<s<<endl; /// "323"

    /// string to integer convert
    string sr = "123";
    num = stoi(sr);
    cout<<num<<endl; /// 123
    ++num;
    cout<<num<<endl; /// 124

    sr = "MehKUKUraj";

    sr.erase( sr.begin()+3, sr.begin()+7 ); /// KUKU
    cout<<sr<<endl; /// Mehraj

    tmp = "Go Akash Go";

    copy( tmp.begin()+3, tmp.begin()+8, back_inserter(sr) ); /// MehrajAkash

    cout<< sr <<endl;

    sr = "aaBaCDaa";
    sr.erase( remove( sr.begin(), sr.end(), 'a' ), sr.end() ); /// BCD
    cout<<sr<<endl;


    sr = "asdfjkl";

    cout<< sr.find("sdf"); /// 1


    /// taking string input
    char ch;
    cin>>ch;
    getline( cin, s ); /// Mehraj Hossain Akash
    s = ch + s;
    cout<< s <<endl;




return 0;
}
