#include <bits/stdc++.h>
using namespace std;

int kadanealgorithm(int a[],int n){
  int currentsum=0;int maxSum=INT_MIN;
  for(int i=0;i<n;i++){
    currentsum=currentsum+a[i];
    if(currentsum<0){
      currentsum=0;
    }
    maxSum=max(currentsum,maxSum);
  }
  return maxSum;
}

int nonwrap(int a[],int n){
  int tsum=0;
  for(int i=0;i<n;i++){
    tsum=tsum+a[i];
    a[i]=-a[i];
  }
  int nwrap=tsum+kadanealgorithm(a,n);
  return nwrap;
}

int main()
{
    int a[]={12,-5,4,-8,11};
    int n=sizeof(a)/sizeof(a[0]);
    int wrap=kadanealgorithm(a,n);
    int nowrap=nonwrap(a,n);
    cout<<"Maximum circular array sum:"<<max(wrap,nowrap);
    return 0;
}
