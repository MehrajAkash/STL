 /**
 1 x : Add an element  to the set.
 2 x : Delete an element  from the set. (If the number  is not present in the set, then do nothing).
 3 x : If the number  is present in the set, then print "Yes"(without quotes) else print "No"(without quotes).
**/
#include<bits/stdc++.h>
using namespace std;
int main(){

   /**  set<int> se = { 3,4,5,7,8,10};
     cout<<"5: "<< *se.find(4) <<endl;
     cout<<"55: "<<*se.find(55)<<endl;
     cout<< se.count(4) <<endl;
     cout<< se.count(88) <<endl;
**/
    int t;
    cin>>t;
     int ft,sd;
     set<int>s;

    while(t--){
        cin>>ft>>sd;

        if(ft == 1){
            s.insert(sd);
        }
        else if(ft==2){
            if( s.count(sd)== 1){
                s.erase(sd);
            }
        }
        else{
            if( s.count(sd)) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }

    }


return 0;
}
