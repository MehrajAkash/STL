#include<bits/stdc++.h>
using namespace std;
#define ROW 4
#define COL 5
int main(){

    vector<vector<int> > vec;

    int num = 10;

    for(int i=0; i<ROW; i++){
        vector<int> v1;

        for(int j=0; j<COL; j++){
            v1.push_back(num);
            num += 5;
        }
        vec.push_back(v1);
    }

    for (int i = 0; i < vec.size(); i++) {
       for (int j = 0; j < vec[i].size(); j++)
          cout << vec[i][j] << " ";
       cout << endl;
    }
    /**
    10 15 20 25 30
    35 40 45 50 55
    60 65 70 75 80
    85 90 95 100 105
   **/
    cout<< vec.back()[0] <<endl; /// 85
    cout<< vec.back()[1] <<endl; /// 90
    cout<< vec.back()[3] <<endl; /// 100

    cout<< vec[0].begin()[0] <<endl;/// 10

    vec[0].pop_back();
    vec[2].pop_back();
    vec[3].pop_back();

    for (int i = 0; i < vec.size(); i++) {
       for (auto it = vec[i].begin(); it!=vec[i].end(); it++ )
          cout << *it << " ";
       cout << endl;
    }
    /**
    10 15 20 25
    35 40 45 50 55
    60 65 70 75
    85 90 95 100
    **/





return 0;
}
