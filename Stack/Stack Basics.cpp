
#include<bits/stdc++.h>
using namespace std;

int main(){

    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout<<st.size()<<endl;/// 4

    while( !st.empty() ){
        cout<<st.top() <<" ";/// 4 3 2 1
        st.pop();
    }








return 0;
}
