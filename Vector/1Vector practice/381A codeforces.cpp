
#include<bits/stdc++.h>
using namespace std;

int main(){

int n,f1=1,sum1=0,sum2=0;

cin>>n;

 vector<int>v;

 int value;

 while(n--){
    cin>>value;
    v.push_back(value);
 }


 while( ! v.empty() ){

    if(f1==1){
        if( *v.begin() > v.back() ){
           sum1 += *v.begin();
           v.erase(v.begin());
        }

        else{
            sum1 += v.back();
            v.pop_back();
        }
        f1 = 2;
    }

    else{
          if( *v.begin() > v.back() ){
           sum2 += *v.begin();
           v.erase(v.begin());
          }

        else{
            sum2 += v.back();
            v.pop_back();
        }
        f1 = 1;
    }

 }

 cout<<sum1<<" "<<sum2<<endl;


return 0;
}
