#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef long long ll;
/*int main(){
 int t,n,val,ans=0,a,b,c;
 cin>>t;
 while(t--){
    priority_queue<int, vector<int>, greater<int> >pq;

    cin>>n;
    while(n--){
        cin>>val;
        pq.push(val);
    }
    while( pq.size() >= 2 ){
        a = pq.top();
        pq.pop();

        b = pq.top();
        pq.pop();

        ans += (a+b);

        pq.push(a+b);
    }
    cout<<ans<<endl;
    ans=0;

 }

return 0;
}
*/
int main()
{
	optimize();

	int t;
	cin >> t;

	while ( t-- ) {
		int n;
		cin >> n;
		priority_queue< ll, vector<ll>, greater<ll> > q;

		for ( int i = 0; i < n; i++ ) {
			int a;
			cin >> a;
			q.push ( a );
		}

		ll ans = 0;
		while ( q.size() > 1 ) {
			ll a = q.top();
			q.pop();

			ll b = q.top();
			q.pop();

			q.push ( (a + b) );
			ans += (a+b);
		}

		cout << ans << endl;
	}


	return 0;
}
