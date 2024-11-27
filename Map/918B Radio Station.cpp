#include<bits/stdc++.h>
using namespace std;

int main(){

    int m,n;
    map <string,string> mf;
    cin>>m>>n;

    while(m--){
        string name1,ip1;
        cin >> name1 >> ip1;
        mf[ip1] = name1;
    }

    while(n--){
        string name2,ip2;
        cin>> name2 >> ip2;
        ip2.pop_back();

        cout<<name2<<" "<<ip2<<"; #"<<mf[ip2]<<endl;
    }


    return 0;
}
