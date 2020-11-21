#include <bits/stdc++.h>
using namespace std;

void kadanealgorithm(int a[],int n){
  int currentsum=0;int maxSum=INT_MIN;
  for(int i=0;i<n;i++){
    currentsum=currentsum+a[i];
    if(currentsum<0){
      currentsum=0;
    }
    maxSum=max(currentsum,maxSum);
  }
  cout<<"The maximum sum subarray:"<<maxSum;
}

int main()
{
    int a[]={1,-5,6,2,3,-1};
    int n=sizeof(a)/sizeof(a[0]);
    kadanealgorithm(a,n);
    return 0;
}
