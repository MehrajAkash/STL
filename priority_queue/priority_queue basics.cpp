#include<bits/stdc++.h>
using namespace std;

int main(){

    priority_queue<int> pq; /// Automatic sorted in Descending order
    pq.push(8);
    pq.push(2);
    pq.push(1);
    pq.push(11);

    cout<<pq.size()<<endl;/// 4
    while( !pq.empty() ){
        cout<< pq.top() <<" ";/// 11 8 2 1  automatic sorted in descending order.  O(nlogn)
        pq.pop();
    }
    cout<<endl;
    cout<<pq.size()<<endl; /// 0


    /** auto sorting in ascending order **/
     priority_queue< int, vector<int>,greater<int> > q;
    q.push(8);
    q.push(2);
    q.push(1);
    q.push(11);
    while( !q.empty() ){
        cout<< q.top() <<" "; /// 1 2 8 11
        q.pop();
    }
    cout<<endl;




    priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>  > pq2;

    pq2.push({8,4});
    pq2.push({8,5});
    pq2.push({1,3});
    pq2.push({5,9});
    while( !pq2.empty() ){
        cout<< pq2.top().first<<" "<<pq2.top().second <<endl; /// 1 2 8 11
        pq2.pop();
    }
    cout<<endl;
    /**
    1 3
    5 9
    8 4
    8 5
    **/





return 0;
}
