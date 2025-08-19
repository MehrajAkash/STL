#include<bits/stdc++.h>
using namespace std;
int main(){

    unordered_map<int, string> um={ {1, "Geeks"}, {2,"For"},{3,"C++"} };

    for(auto i : um){
        cout<< i.first <<": "<<i.second<<endl;
    }
/** 3: C++
    1: Geeks
    2: For
**/

    um.insert({4, "Java"});
    um.insert({5, "Python"});

    cout<<um[2]<<endl; /// For

    um[2]="Script";

    um.count(4); /// if key is present returns 1 otherwise returns 0

/** find() member function. This function returns iterator
the element if found, otherwise returns end() iterator. **/

    auto it = um.find(3);

    if( it != um.end() ){
        cout<< it->first <<": "<< it->second <<endl; /// 3: C++
    }

    for(auto it = um.begin(); it != um.end(); it++)
        cout << it->first << ": " << it->second<< endl;

/** 5: Python
    1: Geeks
    2: Script
    3: C++
    4: Java
**/


 // Delete element which have key 2
    um.erase(2);

    // Delete first element
    um.erase(um.begin());

 /**
    Operation	           Time Complexity

Insert an element	        O(1) (average)
Delete an element by key	O(1) (average)
Access element by key       O(1) (average)

Find element by key	        O(1) (average)
Update element by key	    O(1) (average)
Traverse the map	        O(n)
**/

return 0;
}
