//space complexity O(n), time complexity O(nlogn)
/*#include<algorithm>
int Solution::kthsmallest(const vector<int> &A, int B) {
       int n=A.size();
       int arr[n];
    for(int i=0;i<n;i++){
        arr[i]=A[i];
    }
    sort(arr,arr+n);
    return arr[B-1];
}*/

int Solution::kthsmallest(const vector<int> &A, int B) {
    int low=0,high=0;
    for (int x:A){
        high=max(high,x);  
    }
    int ans=-1;
    while (low<=high) {
        int mid=(low+high)/2;
        int count = 0;
        for (int x:A) {
            if(x<= mid) {count++;};
        }
        if (count >= B) {
            ans=mid;
            high=mid-1; 
        } else {
            low=mid+1; 
        }
    }
    return ans;
}
// Time Complexity= O(logn) Space complexity=o(1)

