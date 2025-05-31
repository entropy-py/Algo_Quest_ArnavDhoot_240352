#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maxLength(string&s) {
        int maxx = 0;
        int n = s.length();
        for (int i = 0; i < n; i++) {
            if(n-i<= maxx){
                break;
            }
            if (s[i] == '(') {
                int open = 0, close = 0;
                for (int j = i; j < n; j++) {
                    if (s[j] == '(') {
                        open++;
                    } else {
                        close++;
                    }
                    if (close > open) {
                        break;
                    }
                    if (open == close && open + close > maxx) {
                        maxx = open + close;
                    }
                }
            }
        }
        return maxx;
    }
};