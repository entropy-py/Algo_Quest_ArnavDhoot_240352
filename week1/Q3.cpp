
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,j;
    cin >> t;
    while(t--){
        int beauty=0,pos=0;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
     if(n==1){
        cout<<"0"<<"\n";
    }
    else{
    vector<pair<double, int>> c_with_index(n);
    for (int i = 0; i < n; i++) {
        c_with_index[i] = {double(a[i])/ b[i], i}; 
    }
    sort(c_with_index.begin(), c_with_index.end(),greater<>());
    vector<int> sorted_b(n);
    for (int i = 0; i < n; i++) {
        sorted_b[i] = b[c_with_index[i].second];
    };
    vector<int> sorted_a(n);
    for (int i = 0; i < n; i++) {
        sorted_a[i] = a[c_with_index[i].second];
    }
    for(j=1;j<n;j++){

        pos+=sorted_a[j-1];
        beauty+=pos*sorted_b[j];
    }
    cout<<beauty<<"\n";
    }
    }
    return 0;
}

