  #include <bits/stdc++.h>
    using namespace std;
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int count,i,b,j,k;
        vector<int>ans;
        int hashp[26]={0};
        int hashs[26]={0};
        for(k=0;k<p.size();k++){
          hashp[p[k]-'a']++;
        }
                if (s.size() < p.size()) return ans;

        for(i=0;i<(s.size()-p.size()+1);i++){
            count=0;
            for(j=0;j<p.size();j++){
              hashs[s[i+j]-'a']++;
            }
            for(b=0;b<26;b++){
          if(hashp[b]==hashs[b]){
           count++;
          }
        }
        if(count==26){ans.push_back(i);
        };
        for(int t=0;t<26;t++){
        hashs[t]=0;}
        }
     return ans;
    }
};

