#include<bits/stdc++.h>
using namespace std;

bool isBalance(char c1, char c2){
    //cout<<c1<<c2<<endl;
    return ( (c1=='(' && c2==')') || (c1=='{' && c2=='}') || (c1=='[' && c2==']') );
}

int main(){

    string s;
    cin>>s;
    int sz = s.size();
    sz = sz/2;

    stack<char>c;

    for( auto u : s ){
        c.push( u );
    }

    int i=0, val = 1 ;
    if( !s.empty() && s.size()%2==0 ){

            while( sz > 0 ){

                 if( isBalance( s[i], c.top()) ){
                       //cout<<s[i]<<c.top()<<endl;
                    i++;
                    c.pop();
                 }
                else {
                        val = 0;
                        break;
                }

                sz--;
            }
    }
    else{
        cout<<"NO"<<endl;
        return 0;
    }


    if(val){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }





return 0;
}
