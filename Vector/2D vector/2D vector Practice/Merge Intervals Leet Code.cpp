#include <vector>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // Function to merge overlapping intervals
    vector<vector<int>> merge(vector <vector<int> >& intervals) {
        // First, sort the intervals based on the starting times
       sort(intervals.begin(), intervals.end());

        // This will be the result vector for merged intervals
        vector< vector<int> > mergedIntervals;

        // Initialize the result vector with the first interval
        mergedIntervals.push_back(intervals[0]);

        // Iterate through all the intervals starting from the second one
        for (int i = 1; i < intervals.size(); ++i) {
            // If the current interval does not overlap with the last interval in the result,
            // then simply add the current interval to the result
            if (mergedIntervals.back()[1] < intervals[i][0]) {
                mergedIntervals.push_back(intervals[i]);
            } else {
                // If there is an overlap, merge the current interval with the last interval
                // in the result by updating the end time to the maximum end time seen
                mergedIntervals.back()[1] = max(mergedIntervals.back()[1], intervals[i][1]);
            }
        }
        // Return the merged intervals
        return mergedIntervals;
    }
};

int main(){

    Solution s;
    int n=3;

    vector<vector<int>> dd;
    vector<int>d;
    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;

        d.push_back(a);
        d.push_back(b);

        dd.push_back(d);
    }

    vector<vector<int>> dd2 = s.merge(dd);

    for(int i=0; i<dd2.size(); i++ ){
        for(int j=0; j<dd2[i].size(); j++){
            cout<< dd2[i][j]<<" ";
        }
        cout<<endl;
    }



return 0;
}
