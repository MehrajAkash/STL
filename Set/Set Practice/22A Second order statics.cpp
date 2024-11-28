#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    set<int>s;

    int tmp = n;
    int val;
    while(tmp--){
       cin>>val;
       s.insert(val);
    }

    if(s.size() < 2) return cout<<"NO"<<endl, 0;

    cout<< *(++s.begin()) <<endl;


return 0;
}
