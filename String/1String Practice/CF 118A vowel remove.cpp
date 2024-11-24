#include<bits/stdc++.h>
using namespace std;

 bool check(char x){

    return (x == 'a' || x=='e' || x=='o' || x=='u' || x=='i' || x=='y');
 }

int main(){

  string sr,nsr;
  cin>>sr;


  for(auto x : sr){
        x = tolower(x);

      if( !check(x) ){
         nsr += '.';
         nsr += x;
      }

  }

  cout<<nsr<<endl;


return 0;
}
