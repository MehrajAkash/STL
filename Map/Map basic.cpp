#include<bits/stdc++.h>
using namespace std;

int cnt[2233];

int main(){

    vector<int> v = { 2, 2, 3, 4, 2 };

    for(auto u : v ){
        cnt[u]++;
    }

    for( int i=0; i<=5; i++ ){
        cout<<"cnt["<<i<<"] = "<< cnt[i] <<endl;
    }
    /**
    cnt[0] = 0
    cnt[1] = 0
    cnt[2] = 3
    cnt[3] = 1
    cnt[4] = 1
    cnt[5] = 0  **/

    map<string, int> age;

    age["Rahim"] = 21;
    age["Tamanna"] = 15;
    age["Faysal"] = 24;
    age["Faysal"] = 30;

    cout<< age["Tamanna"]<<endl; /// 15
    cout<< age["Faysal"]<<endl; /// 24

    for(auto u : age) cout<< u.first << " " << u.second <<endl;
    /***
                key value in map automatic sorted & duplicate key not allowed
    Faysal 30
    Rahim 21
    Tamanna 15
    **/


    map<string,string> gender;

    gender["Mahtab"] = "Male";
    gender["Tamanna"] = "Female";

    cout<< gender["Mahtab"] <<endl; /// Male
    cout<< gender["Tamanna"] <<endl; /// Female



    vector<long long> vec = { 9999999999 ,33333333, 5, 33333333,8888,33333333};
    map<long long, int> cnt;

    for( int i=0; i < vec.size(); i++ ){
        cnt[ vec[i] ]++;
    }

     cout<< cnt[33333333] << endl; /// 3
     cout<< cnt[8888] <<endl; /// 1

     for(auto u : cnt){
        cout<< u.first << " = " << u.second <<endl;
     }
     /*** key value in map automatic sorted
     5 = 1
    8888 = 1
    33333333 = 3
    9999999999 = 1
    **/

    vector<string> name = {"Turja","Tahmid","Al Amin","Shohan"};
    map<string, int> id;

    for(int l = 0; l<name.size(); l++){
        id[ name[l] ] = l+1;
    }

    for( auto u : id) cout<< u.first<<" - " << u.second<<endl;
    /***
        Al Amin - 3
        Shohan - 4
        Tahmid - 2
        Turja - 1
     **/



    map<int, bool> visited;
    vector<int> value = { 8, 8, 8, 1, 3, 3 };

    for( auto u : value ) visited[u] = 1;

    for( auto u : visited ) cout<< u.first << " "<< u.second<<endl;
    /** key value sorted
    1 1
    3 1
    8 1
      **/

    map<string, int> idd;

        string s = "Saila";
        int d = 102;

        idd[s] = d;

/// vector of map
    vector< map<string, int> > vv;

    map<string, int> c;

    c[ "asd" ] = 1006;

    vv.push_back( c );

    cout<< vv[0]["asd"] <<endl; /// asd

    ///*********
    map<int,int> cc;
    cc[1] = 1001;
    cc[2] = 1002;
    cc[2] = 1022;
    cc[3] = 1003;
    cc[3] = 1033;
    cout<< cc.size() <<endl; /// 3




return 0;
}
