#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<vector<int>> v = { {1,2,3}, {5,6} };

    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            cout<< v[i][j]<<" ";
        }
      cout<<endl;
    }
    /* 1 2 3
       5 6
    */
     /// 2D vector with initial size and value
     vector<vector<int>> v2( 2, vector<int>(3,11));

     for(auto i : v2 ){
        for(auto j : i ){
            cout<< j <<" ";
        }
        cout<<endl;
     }
    /**
    11 11 11
    11 11 11
    **/
    vector<vector<int>> v3 = {{1,2,3},{4,5,6}};
    for(int i=0; i<v3.size(); i++){
        for(int j=0; j<v3[i].size(); j++){
            cout<< v3[i][j]<<" ";
        }
        cout<<endl;
    }
   /**
   1 2 3
   4 5 6
   **/
    /// Access 2nd element in 1st row
      cout << v.at(0).at(1); ///  2
     cout<<endl;


     vector<vector<int>> v4 = {{11,22,33},{44,55,66}};

     v4.push_back({77,88,99});
     /// Insert value in 2nd row at 2nd position
     v4[1].insert( v4[1].begin()+1, 50 );

     for(auto i : v4 ){
        for(auto j : i ){
            cout<< j <<" ";
        }
        cout<<endl;
     }
    /**
    11 22 33
    44 50 55 66
    77 88 99
    **/



  cout<<endl<< " v5 vector: "<<endl;

    vector<vector<int>> v5 = {{1,2,3},{4,5,6},{808,909,111}};

    /// delete the second row
    v5.erase( v5.begin() + 1 );

    /// delete the first row
    v5.erase( v5.begin() );

   /// delete the second element 909
    v5[0].erase( v5[0].begin() + 1 );

    for(int i=0; i<v5.size(); i++ ){
        for(int j=0; j<v5[i].size(); j++ ){
            cout<< v5[i][j] <<" ";
        }
        cout<<endl;
    }
   /// 808 111


return 0;
}
