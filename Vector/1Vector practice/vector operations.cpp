
#include<bits/stdc++.h>
using namespace std;
 #define en endl;
int main(){

 vector<int> v;

 v.push_back(1);
 v.push_back(2);
 v.push_back(3);

  cout<<v[0]<<" "<<v[1] <<en;
  v[1]=22;
  cout<<v[1]<<en;

  cout<<"v[2] = "<<v[2]<<en;

  v.at(2) = 33;

  cout<<"v[2] = "<<v[2]<<en;

  for(int i=0;i<v.size();i++) cout<<v[i]<<" "; // 1 22 33
  cout<<en;

  v = {3,5,7};
   for(int i=0;i<v.size();i++) cout<<v[i]<<" "; // 3 5 7 9
  cout<<en;

 v.clear();
 cout<<v.size()<<en; // 0
 cout<<v.empty()<<en; // 1

 vector<int>v1 = {22,44,66};

 cout<<v1.empty()<<en; // 0

 v1.resize(6);
 cout<<v1.size()<<en; // 6

 for(int x : v1) cout<<x<<" "; //22 44 66 0 0 0
 cout<<en;

 for(auto y : v1) cout<<y<<" ";// 22 44 66 0 0 0
cout<<en;

 vector<int> a;

 a = v1; // vector v1 assign into vector a

 vector<int>::iterator itt;
 for(itt = a.begin(); itt != a.end(); ++itt) cout<< *itt <<" "; // 22 33 44 0 0 0
 cout<<en;

 a = {3,4,5,1,2};

 sort( a.begin(),a.end() ); // O(n*log2(n))

 for( auto u : a) cout<<u<<" "; // 1 2 3 4 5
 cout<<endl;

 sort( a.rbegin(), a.rend() );

 for( auto u : a) cout<<u<<" "; // 5 4 3 2 1
 cout<<endl;

   a = { 3, 4, 5, 1, 2 };
   sort( a.begin(), a.end(), greater<int>() );

   for( auto u : a) cout<<u<<" "; // 5 4 3 2 1
     cout<<en;

     a = {2,4,6,8};
    reverse( a.begin(), a.end() );

   for( auto u : a) cout<<u<<" "; // 8 6 4 2
     cout<<en;

  cout<< a.back()<<en; // 2
   a.pop_back(); // 2   O(1)complexity
  cout<< a.back()<<en; // 4

  a = {3,4,5,1,2};
  cout<<a.front()<<en; //3
  cout<< *a.begin() <<en; // 3

  a.erase( a.begin() ); // O(n) complexity

  for(auto u : a) cout<< u << " "; // 4,5,1,2
  cout<<en;

  a.erase( a.begin() + 2 );// 1 erased

    for(auto u : a) cout<< u << " "; // 4,5,2
  cout<<en;

  a = { 1, 1, 1, 2, 2, 3, 3 };
  unique( a.begin(), a.end() ); // O(n)

  for(auto u : a) cout<< u << " "; // 1 2 3 2 3 3
  cout<<en;

    a = { 1, 1, 1, 2, 2, 3, 3 };
 int n = unique( a.begin(), a.end() ) - a.begin();

 cout<< n <<en; // 3
 for(int i=0; i<n; i++) cout<< a[i] <<" "; // 1 2 3
 cout<< en;

 a = { 2, 3, 5, 1};
 cout<< max_element( a.begin(), a.end()) - a.begin() <<en; // 2 index number of max element
cout<< *max_element( a.begin(), a.end()) <<en; // 5 max value


vector<int>v2(10,3); // 3 3 3 3 3 3 3 3 3 3 ***** 10 index assign with value 3;
vector<int>::iterator tt;

for( tt = v2.begin(); tt != v2.end(); tt++) cout<< *tt << " ";
cout<<en;

vector<int>vec = {3, 3, 1, 1, 2};

sort(vec.begin(), vec.end()); //O(n*log2(n))

  n = unique( vec.begin(), vec.end() ) - vec.begin(); // n=3

 for( int i=0; i<n; i++) cout<< vec[i] << " ";
 cout<<en;

 vector<int>::iterator it = max_element( vec.begin(), vec.begin()+4 ); // O(n)

 cout<<*it<<en // 3

 cout<< it - vec.begin() <<en; // 2 index number

 cout<< *min_element( vec.begin(), vec.end() ); // 1 minimum value O(n)





return 0;
}
