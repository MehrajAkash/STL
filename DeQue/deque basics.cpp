
#include<bits/stdc++.h>
using namespace std;

int main(){

    deque<int> dq;

    dq.push_front(1);
    dq.push_front(2);
    dq.push_back(3);
    dq.push_back(4);
    /// 2 1 3 4
    cout<<dq.front()<<endl; /// 2
    cout<<dq.back()<<endl; /// 4

    dq.pop_front();
    dq.pop_back();

     cout<<dq.front()<<endl; /// 1
    cout<<dq.back()<<endl; /// 3

    cout<< dq.size() <<endl; /// 2

    while( !dq.empty() ){
        cout<< dq.front();
        dq.pop_front(); /// 1 3
    }




return 0;
}
