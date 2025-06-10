int Solution::solve(vector<int> &A, int B) {
    int n,count=0,left=0,right=0,i,j;
    n=A.size();
    set<int>set1;
    while(left<n&&right<n){
        set1.insert(A[left]);
        set1.insert(A[right++]);
        if(set1.size()==B){
            count++;
        }
        if(set1.size()>B){
            set1.clear();
            left++;
            right=left;
        }
        if(set1.size()<=B&&right==n){
            set1.clear();
            left++;
            right=left;
        }
    }
  return count;
}


