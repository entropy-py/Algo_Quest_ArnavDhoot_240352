#include <bits/stdc++.h>
using namespace std;


int main(){
  int n;
  cin>>n;
  int arr[n];
  int arr1[n];
  int arr2[n]={0};
  int index=0;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  sort(arr,arr+n);
  arr1[index++] = arr[0];
    for (int i=1;i<n;i++) {
        if (arr[i]!=arr[i-1]){
            arr1[index++]=arr[i];
        }
    }
  for(int i=0;i<index;i++){
    for(int j=0;j<n;j++){
      if(arr1[i]==arr[j]){
        arr2[i]++;
      }
    }
  }
  cout<<*max_element(arr2,arr2+n)<<endl;
  return 0;
}