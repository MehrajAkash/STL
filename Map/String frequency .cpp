/**Given a list of N words. Count the number
of words that appear exactly twice in the list**/
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    map<string, int> cnt;

    while(n--){
        string s;
        cin >> s;
        cnt[s]++;
    }

    int ans = 0;
    for(auto u : cnt){
        if( u.second == 2 ) ans++;
    }

  cout<<ans<<endl;

 return 0;
}
/**
Input:
N = 8
list = {Tom, Jerry, Thomas, Tom, Jerry,
Courage, Tom, Courage}
Output: 2
**/
