// leetcode 455
// g = [1,2,3], s = [1,1]
// output = 1 // make the child with 1 greed factor satisfied

#include "vector"
#include <iostream>
using namespace std;

int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    int child = 0;
    int cookie = 0;
    while (child < g.size() && cookie < s.size()){
        // child's content is met
        if (g[child]<=s[cookie]){ 
            child ++;
        }
        cookie ++;
    }
    return child;
}

int main(){
    vector<int> children = {1,2,3};
    vector<int> cookies = {1,1};

    int res = findContentChildren(children, cookies);
    cout << "maximum of children being contented is " << res;
}
