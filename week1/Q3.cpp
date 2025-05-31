
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t,n,j;
    cin >> t;
    while(t--){
        long long beauty=0,pos=0;
    cin >> n;
    vector<long long> a(n), b(n);
    for (long long i = 0; i < n; i++) cin >> a[i];
    for (long long i = 0; i < n; i++) cin >> b[i];
     if(n==1){
        cout<<"0"<<"\n";
    }
    else{
    vector<pair<double, long long>> c(n);
    for (long long i = 0; i < n; i++) {
        c[i] = {double(a[i])/ b[i], i}; 
    }
    sort(c.begin(), c.end(),greater<>());
    vector<long long> sorted_b(n);
    for (long long i = 0; i < n; i++) {
        sorted_b[i] = b[c[i].second];
    };
    vector<long long> sorted_a(n);
    for (long long i = 0; i < n; i++) {
        sorted_a[i] = a[c[i].second];
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

