#include<bits/stdc++.h>
using namespace std;
int main() {

    int t;

	string s;

	cin>>t;
	for(int l=1;l<=t; l++){

        int k,n; cin>>k>>n;

        string s;

        int val=65;
        for(int i=0; i<k;i++){
            s.append(1,char(val)); /** storing Letter from A to A+k in string **/
            val++;
        }

        cout<<"Case "<<l<<":"<<endl;
        cout<<s<<endl;

        for(int i=2;i<=n; i++){
             if( next_permutation( s.begin(), s.end()) ) cout<< s <<endl;

             else{
                break;
             }
        }

	}

}

/**
 ProblemLink: https://lightoj.com/problem/discovering-permutations#google_vignette
**/
