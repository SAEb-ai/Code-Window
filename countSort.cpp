#include <bits/stdc++.h>
using namespace std;

void countSort(int a[],int n){
  int max1=a[0];
  for(int i=1;i<n;i++){
    max1=max(max1,a[i]);
  }
  int count[10]={0};
  for(int j=0;j<n;j++){
    count[a[j]]++;
  }
  for(int i=1;i<=max1;i++){
    count[i]+=count[i-1];
  }
  int output[n];
  for(int i=n-1;i>=0;i--){
    output[--count[a[i]]]=a[i];
  }
  for(int i=0;i<n;i++){
    a[i]=output[i];
  }
}

int main()
{
    int a[]={4,7,2,3,6,1};
    countSort(a,6);
   for(int i=0;i<=5;i++){
     cout<<a[i]<<" ";
  }
}
