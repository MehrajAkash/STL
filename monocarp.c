#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Sort the array in descending order
        sort(a.rbegin(), a.rend());

        int total = 0;
        for (int x : a) {
            total += x;
        }

        int coins_to_add = max(0, k - total); // Minimum coins to make total >= k
        total += coins_to_add;

        int current_sum = 0;
        int chest_count = 0;

        // Simulate Monocarp's greedy selection
        for (int i = 0; i < n; ++i) {
            current_sum += a[i];
            chest_count++;
            if (current_sum >= k) {
                break;
            }
        }

        // We don't actually care about chest_count for this problem,
        // but we compute it to confirm Monocarp's greedy behavior.
        cout << coins_to_add << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
