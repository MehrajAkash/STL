#include<bits/stdc++.h>
using namespace std;

int main(){

    int m,n,val,a,ans=0;
    cin>>m>>n;

    priority_queue<int> pq;

    while(m--){
        cin>>val;
        pq.push(val);
    }

    while(n--){

                a = pq.top();
                pq.pop();
                 ans += a;
                pq.push(--a);

    }

    cout<<ans<<endl;


    return 0;
}
