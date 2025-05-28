#include<bits/stdc++.h>
using namespace std;

double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
    int n = val.size();

    // Create 2D vector to store value and weight
    // items[i][0] = value, items[i][1] = weight
    vector<vector<int>> items(n, vector<int>(2));

    for (int i = 0; i < n; i++) {
        items[i][0] = val[i];
        items[i][1] = wt[i];
    }

    // Sort items based on value-to-weight ratio in descending order
    sort(items.begin(), items.end(), compare);

    double res = 0.0;
    int currentCapacity = capacity;

    for(int i=0; i<n; i++){
        cout<<item[i][0]<<" "<<item[i][1]<<endl;
    }

}

int main() {
    vector<int> val = {60, 100, 120};
    vector<int> wt = {10, 20, 30};
    int capacity = 50;

    cout << fractionalKnapsack(val, wt, capacity) << endl;

    return 0;
}
