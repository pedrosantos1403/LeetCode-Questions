#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {

        int i, j;
        bool answer = true;

        string str = to_string(x);

        // Check if x is negative
        if(x < 0) return false;

        if (x%2 == 0){
            for (i = 0 ; i < str.size()/2 ; i++){
                if (str[i] != str[(str.size()) - 1 - i]){
                    answer = false;
                    break;
                }
            }
        }

        else{
            for (i = 0 ; i < str.size()/2 ; i++){
                if (str[i] != str[(str.size()) - 1 - i]){
                    answer = false;
                    break;
                }
            }
        }

        return answer;
        
    }
};