class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int a,b,i,j,ans=1,n=s.length();;
        set<char>set1;
        if(n>=1){for(i=0;i<n;i++){
            set1.insert(s[i]);
             a=set1.size();
            for(j=i+1;j<n;j++){
              set1.insert(s[j]);
                b=set1.size();
                if(a!=b-1){
                 ans=max(ans,b);
                 set1.clear();
                 break;
                }
                else{
                    a++;
                    ans=max(ans,b);
                }
            }
        }
        }
       if(n==0){ans=0;}

        return ans;
    }
};