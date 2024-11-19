#include<bits/stdc++.h>
using namespace std;

 bool func(vector<int>&arr){

        int n = abs(arr[1] - arr[0]);
        for(int i=1; i<arr.size(); i++ ){
            if( abs(arr[i] - arr[i-1]) != n ) return false;
        }
        return true;
    }

int main(){

vector<int>arr = {3,5,1};

 cout<< max_element(arr.begin(), arr.end()) - arr.begin() <<endl;


 cout<<func(arr)<<endl;


return 0;
}
