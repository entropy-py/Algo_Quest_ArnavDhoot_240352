#include <bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> a, long long k) {

long long n=a.size(),i,j,left=0,right=0,ans=0,sum=0;
    while(left<n&&right<n){
    if (right < n) sum += a[right++];
    if(sum==k){
        ans=((ans>(right-left))?ans:(right-left));

    }
    if(sum>k){
        sum-=a[--right];
        sum-=a[left++];
}
if(sum<k&&right==n-1){
    sum+=a[left++];
}

}
return ans;
}