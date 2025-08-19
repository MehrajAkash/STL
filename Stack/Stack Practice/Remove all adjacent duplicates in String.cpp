#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        stack <char> st;

        for ( auto u : s ) {
            if ( !st.empty() ) {
                if ( !st.empty() && st.top() == u ) st.pop();
                else st.push(u);
            }
            else st.push(u);
        }

        s.clear();
        while (!st.empty()) {
            s += st.top();
            st.pop();
        }

        reverse ( s.begin(), s.end() );
        return s;

    }
};

int main(){

    Solution sn;
    string s="abbd";
    cout<<sn.removeDuplicates(s)<<endl; /// ad

}




/***
    string removeDuplicates(string s) {


        string c;

        for( auto u : s ){

            if( c.back()==u ){
                c.pop_back();
            }
            else{
                c.push_back( u );
            }
        }
     cout<<c<<endl;
      return c;
    }


int main(){

    string f = removeDuplicates("abbd");

return 0;
}
***/


