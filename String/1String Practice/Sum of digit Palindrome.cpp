#include<bits/stdc++.h>
using namespace std;

int main(){

  int digitSum = 0;
  string st;
  cin>>st;

  for( auto x : st ){
    digitSum = digitSum + ( x - '0');
  }

  string tm = to_string(digitSum);
  st = tm;
  reverse( tm.begin(), tm.end() );

  if( tm == st ) cout<< 1 <<endl;
  else cout<< 0 <<endl;





    return 0;
}
