#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int count1=0, count0=0;
        string s;
        cin>>s;

        for(int i=0; i<s.size(); i++){
            if(s[i]=='1')count1++;
            if(s[i]=='0')count0++;
        }

        for(int i=0; i<s.size(); i++){
            if(s[i]=='0')count1--;
            if(s[i]=='1')count0--;

            if( (count0<0 || count1<0) ){
                break;
            }
        }

        cout<<max(count0,count1)<<endl;

    }



return 0;
}
