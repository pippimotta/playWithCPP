/* s="xabcdey"
x="ab*de", "*" means wildcard
return 1 (1st occurence of x in s) */

#include <string>
#include <iostream>

using namespace std;

int checkSubString(string s, string x){
    int S = s.length();
    int X = x.length();

    if (X>S) return -1;
    // iterate all substring of s which has the same length of x
    for (int i=0; i< (S-X+1); i++){
        // iterate char of x
        for (int j=0; j<X; j++){
            if (x[j] != s[i+j] && x[j] != '*') { //TIL:"*" is char array which is not char lol
                // break to next substring of outer loop
                break;
            }

            // all char in x match the substring of s
            if (j == X-1){
                return i;
            }
        }
    }
    return -1;
}

int main(){
    string s = "xabcdey";
    string x = "ab*de";

    int res = checkSubString(s,x);
    if (res == -1) {
        cout << "no occurence";
    } else {
        cout << "first occurence at index " << res;
    }
    
}