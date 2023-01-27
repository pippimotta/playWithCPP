// leetcode 435

#include "vector"
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int eraseOverlapIntervals(vector<vector<int>>& intervals){
  if (intervals.empty()){
    return 0;
  }

  int n = intervals.size();
  // sort intervals according to the min of second element
  sort(intervals.begin(), intervals.end(),[](vector<int> a, vector<int>b){
         return a[1] < b[1];
       });
  int res = 0;
  int  ans = intervals[0][1];
  for (int i=1;i<n;i++){
    // check overlap
    if (intervals[i][0] < ans){
      res ++;
    } else {
      ans = intervals[i][1];
    }
  }
  return res;
}

int main(){
    int intervals[3][2] ={{1,2},{2,4},{1,3}} ;
    int res =  eraseOverlapIntervals(intervals);
    cout << "the num to be removed is " << res;
}
