
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
        int n,val;
        long long k;
        cin>>n>>k;

     vector<int> a(n);

     for(int i=0; i<n; i++ ){
        cin>>val;
        a[i] = val;

     }
     sort(a.rbegin(),a.rend());

     int coinneed=0;
     long long totalcoin=0;
     for(int i=0; i<n; i++){
        totalcoin += a[i];
        if( totalcoin== k){
            cout<<"0"<<endl;
            break;
        }

        else if( (totalcoin + a[i+1] ) > k && totalcoin < k ){
            coinneed = k - totalcoin;
            cout<< coinneed<<endl;
            break;
        }
        else if( ((totalcoin + a[i+1]) <= k) && ((i+1) == (n-1)) ){
            cout<< ( k - (totalcoin+a[i+1]) ) <<endl;
            break;
        }

     }


  }


    return 0;
}
