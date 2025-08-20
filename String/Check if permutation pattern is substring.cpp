#include<bits/stdc++.h>
using namespace std;

int isSubString(string s, string pat){

    string str = "chandpur";
    string s2 = "and";
    int res = str.find(s2); // return -1 or starting index number;
    cout<<res<<endl;    /// 2  because 'and' is a substring of 'chandpur'

    cout<< str.find("ks") <<endl; /// -1 or garbage_value bcz 'ks' is not a substring of 'chandpur'

    sort(s2.begin(), s2.end());
    do{
        for(auto x : s2){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    while( next_permutation( s2.begin(),s2.end() ) );
    /**
    a d n
    a n d
    d a n
    d n a
    n a d
    n d a
    **/

    sort(pat.begin(), pat.end());
    do{
        int res = s.find(pat);

        if(res>=0 && res<s.size()){
            return 1;
        }

    }while( next_permutation( pat.begin(), pat.end() ) );


 return 0;
}

int main(){

 string s = "geeks";
 string pat = "eke";

 if( isSubString(s, pat) )
    cout<<pat<<" is substring of "<<s<<endl;
 else{
    cout<<"Not a substring"<<endl;
 }

return 0;
}
