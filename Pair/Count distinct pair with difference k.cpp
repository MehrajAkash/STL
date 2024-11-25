
#include<bits/stdc++.h>
using namespace std;

	int TotalPairs(vector<int>nums, int k){

	    vector< pair<int,int> > vec;

	    for(int i=0; i<nums.size(); i++){
	        for(int j=0; j<nums.size(); j++){
	            if( i != j && nums[i]-nums[j] == k ){

	                vec.push_back({nums[i], nums[j]});

	            }
	        }
	    }

	    sort(vec.begin(), vec.end());
	    int sz = unique( vec.begin(), vec.end() ) - vec.begin();

	    return sz;
	}

int main(){

  int n,k,val;
  cin>>n;
  vector<int> v;

  while(n--){
    cin>>val;
    v.push_back(val);

  }
  cin>>k;

  cout<< TotalPairs(v,k) <<endl;



return 0;
}

/**
Given an integer array of size n and a non-negative integer k, count all distinct pairs with a difference equal to k, i.e., A[ i ] - A[ j ] = k.
**/

