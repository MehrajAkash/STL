#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    char c;

    cin>>c;
    getline(cin,s);
    s = c + s;


    vector<string>v;

     string tmp,word;
    for(int i=0;i<s.size();i++){


        if( isspace(s[i]))
        {
            v.push_back( tmp );
            tmp.clear();
        }
        else{
            tmp += s[i];
        }
    }
    v.push_back( tmp );

    map<string,int> m;

    int maxf = 0;
    for( auto u : v ){
        m[u]++;
        maxf = max( m[u], maxf );
    }

    string ans;
    for(auto u : v){
       if( m[u] == maxf ){
        ans = u;
        break;
       }
    }

    cout<<ans<<" "<<maxf<<endl;

return 0;
}

/**
You are given a string str that is made up of words separated by spaces.
 Your task is to find the word with the highest frequency, i.e. it appears the most times in the sentence. If multiple words have maximum frequency, then print the word that occurs first in the sentence.

Examples:

Input: str = "the devil in the sky"
Output: the 2
Explanation: The frequency of "the" is 2, so we return "the" and its frequency "2" i.e., "the 2"
**/
